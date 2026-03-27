#include <iostream>
#include <string>
#include <iomanip>
#include "structs.hpp"

using namespace std;

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


// P1 — Display a Progress Bar

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

// P2 — Display the Score Summary Screen

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

// P4 — Subject Selection Menu

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

// P5 — Display a Single Quiz Question

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
