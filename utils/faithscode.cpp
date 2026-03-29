#include <iostream>
#include <string>
#include <iomanip>
#include "structs.hpp"

using namespace std;

// Purpose: Makes sure the user actually enters a valid number within the expected range
// Why it works: Uses a while true loop that never stops until they give us good input.
// If cin fails (they typed garbage), it clears the error flag and ignores the bad input.
// If the number is out of range, it tells them and loops again. Basically a brute force
// input validation that keeps asking until the user cooperates
int getValidInput(int min, int max)
{
    int choice;
    
    while (true)
    {
        cout << "Enter a number (" << min << "-" << max << "): ";
     
        if (!(cin >> choice))
        {
            cout << "Error: That wasn't a number!" << endl;
            
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            
            continue; 
        }

        if (choice >= min && choice <= max)
        {
            return choice; 
        }
        else
        {
            cout << "Invalid range. Try again." << endl;
        }
    }
}


// Purpose: Draws a nice visual progress bar in the terminal
// Why it works: Takes a label and percentage, then uses loops to print filled blocks
// for the progress and empty blocks for what's left. Divides percentage by 5 because
// we want 20 blocks total (each block = 5%). Using unicode block characters makes
// it look way better than just printing numbers, gives that game-like feel
void displayBar(string label, int percentage)
{
    cout << left << setw(16) << label << " [";
    for (int i = 0; i < 20; i++)
    {
        if (i < percentage / 5)
            cout << "█";
        else
            cout << "░";
    }
    cout << "] " << right << setw(3) << percentage << "%" << endl;
}

// Purpose: Shows the player their stats at the end of each week in a fancy box
// Why it works: Builds a text-based box using those unicode border characters and
// prints out all three stats (academic, jati diri, stress) in a nice table format.
// Also gives a little encouraging or concerning message based on stress levels.
// The layout makes it easy to quickly see how youre doing after each week
void displayWeekSummary(GameState state)
{
    string labels[3] = {"Academic Score  ", "Jati Diri Score ", "Stress Level    "};
    int scores[3] = {state.academic, state.jatiDiri, state.stress};

    cout << "╔══════════════════════════════╗" << endl;
    cout << "║       END OF WEEK " << left << setw(11) << state.week << "║" << endl;
    cout << "╠══════════════════════════════╣" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "║  " << labels[i] << ":  " << left << setw(9) << scores[i] << "║" << endl;
    }

    cout << "╠══════════════════════════════╣" << endl;

    if (state.stress < 50)
        cout << "║  " << left << setw(28) << "Keep it up!"  << "║" << endl;
    else
        cout << "║  " << left << setw(28) << "Relax..."     << "║" << endl;

    cout << "╚══════════════════════════════╝" << endl;
}

// Purpose: Displays the subject selection menu so players can pick what to be tested on
// Why it works: Prints out a nice box with three subject options (Chemistry, Physics, Math).
// Uses getValidInput to make sure they actually pick 1, 2, or 3 and not something stupid.
// Returns the choice number which main uses to know which question bank to load
int displaySubjectMenu()
{
    string subjects[3] = {"Chemistry", "Physics", "Mathematics"};

    cout << "╔══════════════════════════════╗" << endl;
    cout << "║  " << left << setw(28) << "Choose Your Subject" << "║" << endl;
    cout << "╠══════════════════════════════╣" << endl;

    for (int i = 0; i < 3; i++)
    {
        string line = to_string(i + 1) + ". " + subjects[i];
        cout << "║  " << left << setw(28) << line << "║" << endl;
    }

    cout << "╚══════════════════════════════╝" << endl;

    int choice = getValidInput(1, 3);
    cout << "You chose " << subjects[choice - 1] << ". Good luck!" << endl;
    return choice;
}

// Purpose: Displays a single quiz question with its answer options
// Why it works: Takes the question data and formats it nicely with a divider line,
// shows the question number and text, then lists options 1-4. Returns whatever
// getValidInput gives us so we know which option they picked
int displayQuestion(int questionNumber, string questionText, string* options)
{
    cout << "----------------------------------------" << endl;
    cout << "Q" << questionNumber + 1 << ". " << questionText << endl << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "  " << (i + 1) << ") " << *(options + i) << endl;
    }

    return getValidInput(1, 4);
}
