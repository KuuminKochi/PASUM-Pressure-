#include <thread>
#include <iostream>
#include <string>
#include "utils/faithscode.cpp"
#include "utils/initializeacademicquestions.cpp"
#include "utils/initializejatidiriquestions.cpp"
#include "utils/initializestory.cpp"
#include "utils/structs.hpp"

using namespace std;

// Initialization Week
const int INITIALWEEK = 0;
const int INITIALACADEMIC = 20;
const int INITIALJATIDIRI = 80;
const int INITIALSTRESS = 20;
const int INITIALROUTE = 2;
const int MAXQUESTION = 10;

// Ending Conditions
const int FINALWEEK = 7;

// Purpose: Clears whatever junk is on the terminal so the UI looks fresh
// Why it works: Runs both windows (cls) and unix (clear) commands. One of them
// is guaranteed to work no matter what system we're on, kind of a lazy but effective cross-platform fix
void clearScreen() {
    system("cls");
    system("clear");
}

// Purpose: Sets up a fresh game state with all the starting values
// Why it works: Creates a new GameState struct and fills in each field with
// our predefined constants. That way every new game kicks off with the exact
// same balanced starting point, no random nonsense
GameState initializeGame() {
    GameState state;
    state.week = INITIALWEEK;
    state.academic = INITIALACADEMIC;
    state.jatiDiri = INITIALJATIDIRI;
    state.stress = INITIALSTRESS;
    state.route = INITIALROUTE;
    return state;
}

// Purpose: Decides which emotional route the player is on based on their stress meter
// Why it works: A simple stress threshold determines if you're heading down a healthy path
// or need some extra support. Low stress = counselor route, high stress = healthy route.
GameState checkRoute(GameState state) {
    if (state.stress <= 50) {
        state.route = 1; 
    }

    if (state.stress > 50) {
        state.route = 2; 
    }

    return state;
}

// Purpose: Runs the academic quiz portion where players answer questions from their chosen subject
// Why it works: Grabs the relevant questions based on subject and week, then loops through each one.
// Getting it right bumps your academic score up. Getting it wrong is a double whammy because
// you lose academic points AND stress gets worse, especially if your jati diri is already low.
// The logic being that struggling academically when you already feel bad about yourself hits harder
GameState run_academic_quiz(GameState state, int subjects) {
    Question* questions = initializeAcademicQuestions(state, subjects);
    for ( int i = 0 ; i < MAXQUESTION; i++) {
        clearScreen();
        Question cur_question = *(questions + i);
        displayBar("Academic", state.academic);
        displayBar("Stress", state.stress);
        int selection = displayQuestion(i, cur_question.questionText, cur_question.options);
        if (selection == cur_question.answer) {
            state.academic += 10;
        } else {
            state.jatiDiri > 80 ? state.stress += 5 : state.stress += (5 * 1.5);
            state.academic -= 3;
        }
    }
    return state;
}


// Purpose: Handles the jati diri (self-identity) quiz part of the game
// Why it works: Similar loop structure to the academic quiz, but this one just cares about
// your jati diri score. Right answers build you up, wrong answers knock you down.
// The penalty here is steeper than academic because self-identity is fragile and
// getting these wrong feels more personal I guess?
GameState run_jatidiri_quiz(GameState state) {
    Question* questions = initializeJatiDiriQuestions(state);
    for ( int i = 0 ; i < MAXQUESTION; i++) {
        clearScreen();
        Question cur_question = *(questions + i);
        system("cls");
        system("clear");
        displayBar("Jati Diri", state.jatiDiri);
        int selection = displayQuestion(i, cur_question.questionText, cur_question.options);
        if (selection == cur_question.answer) {
            state.jatiDiri += 5;
        } else {
            state.jatiDiri -= 8;
        }
    }
    return state;
}

// Purpose: Shows the player what ending they got based on which route they ended up on
// Why it works: Just checks the route value in game state and prints the corresponding message.
// Route 0 is the bad ending (didnt implement suicide route properly tho lol),
// route 1 means you saw a counselor, route 2 means you made it through healthy.
// The switch statement is simple but gets the job done for displaying endings
GameState endingEvaluator(GameState state) {
    switch (state.route) {
        case 0:
            cout << "Suicide Route: oh..." << endl;
        case 1:
            cout << "Counselor Route: You good cuh?" << endl;
        case 2:
            cout << "Healthy Route: Yay!" << endl;
        default:
            cout << "I guess... You're none?";
    }
    return state;
}

// Purpose: Parses through the story dialogue array and displays it with various effects
// Why it works: Goes through each string in the dialogue array and checks for special keywords.
// $CLEAR wipes the screen, $END exits the dialogue, and the streaming keywords make text appear
// character by character at different speeds. The 250 limit is a safety check in case someone
// forgets to add $END to their dialogues, so the game wont loop forever and will at least tell you
// that you messed up.
void dialogueParser(string* dialogues) {
    clearScreen();
    string keywords[10] = {"$CLEAR", "$END", "$STREAM", "$STREAMFAST", "$STREAMSLOW"};
    for ( int i = 0 ; i < 300 ; i++ ) {
        if ( *(dialogues + i) == keywords[0] ){
            clearScreen();
        }
        else if ( *(dialogues + i) == keywords[1] ){
            clearScreen();
            break;
        }
        else if ( *(dialogues + i ) == keywords[2] ){
            i++;
            for (char ch : *(dialogues + i) ) {
                cout << ch << flush;
                this_thread::sleep_for(80ms);
            }
            this_thread::sleep_for(3000ms);
            clearScreen();
        }
        else if ( *(dialogues + i ) == keywords[3] ){
            i++;
            for (char ch : *(dialogues + i) ) {
                cout << ch << flush;
            this_thread::sleep_for(10ms);
            }
            this_thread::sleep_for(500ms);
            clearScreen();
        }

        else if ( *(dialogues + i ) == keywords[4] ){
            i++;
            for (char ch : *(dialogues + i) ) {
                cout << ch << flush;
                this_thread::sleep_for(200ms);
            }
            this_thread::sleep_for(3000ms);
            clearScreen();
        }

        else if (i > 250) {
            cout << "YOU FORGOT \"$END\"" << endl;
        } else {
            cout << *(dialogues + i) << endl;
            cin.get();
        }
    }
}

// Purpose: Grabs the story dialogues for the current week and plays them out
// Why it works: Calls initializeStory which returns the right set of dialogues based on
// what week it is, then throws them to dialogueParser to handle the display.
// Simple wrapper function to keep main() clean and readable
void displayStory(GameState state) {
    string* dialogues = initializeStory(state);
    dialogueParser(dialogues);
}


// Purpose: Shows the interlude dialogue between academic and jati diri quizzes
// Why it works: Same idea as displayStory but for interludes. These are those
// in-between moments that give the story some breathing room and emotional weight
void displayInterlude(GameState state) {
    string* dialogues = initializeInterlude(state);
    dialogueParser(dialogues);
}

// Purpose: Main game loop that ties everything together
// Why it works: Starts by setting up the initial game state, then runs a while loop
// that cycles through story -> subject selection -> academic quiz -> interlude ->
// jati diri quiz -> week summary. Keeps going until we hit FINALWEEK. Each iteration
// represents one week of PASUM life, so by the end you've gone through 7 weeks of hell lol
int main(int argc, char const *argv[])
{
    clearScreen();
    GameState state = initializeGame(); 
    while (state.week <= FINALWEEK) {
        displayStory(state);
        int subjects = displaySubjectMenu();
        state = run_academic_quiz(state, subjects);
        displayInterlude(state);
        state = run_jatidiri_quiz(state);
        this_thread::sleep_for(300ms);
        displayWeekSummary(state);
        cout << "\n It'll move on automatically, please wait!" << endl;
        this_thread::sleep_for(4000ms);
        state.week++;
        clearScreen();
    }
    return 0;
}
