// For Cleanliness
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
