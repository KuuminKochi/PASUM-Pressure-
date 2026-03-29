// Purpose: Defines the core data structures used throughout the entire game
// Why it works: These structs are the backbone of the whole program. Question holds
// everything needed for a single quiz question, and GameState tracks the players
// progress through the week. Having them in a header file means all the other
// cpp files can include it and use these structures without redeclaring them
#include <string>
#pragma once
using namespace std;

struct Question {
    string questionText;
    string options[4];
    int answer;
};

struct GameState {
    int week;
    int academic;
    int jatiDiri;
    int stress;
    // 0 - Suicide 1 - Counselor 2 - Healthy
    int route;
};
