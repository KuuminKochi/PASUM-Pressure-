#include <iostream>
using namespace std;

// Initialization Week
const int INITIALWEEK = 0;
const float INITIALACADEMIC = 0.2;
const float INITIALJATIDIRI = 0.5;
const float INITIALSTRESS = 0.2;

// Ending Conditions
const int FINALWEEK = 7;

struct Question {
    string* options;
};

struct GameState {
    int week;
    float academic;
    float jatiDiri;
    float stress;
};

GameState initializeGame() {
    GameState state;
    state.week = INITIALWEEK;
    state.academic = INITIALACADEMIC;
    state.jatiDiri = INITIALJATIDIRI;
    state.stress = INITIALSTRESS;
    return state;
}

int main(int argc, char const *argv[])
{
    GameState state = initializeGame(); 
    while (state.week <= FINALWEEK) {
        // Work on this
    }
    return 0;
}
