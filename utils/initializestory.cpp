// Purpose: Returns the story dialogue array for the current week
// Why it works: Switches on state.week to return different dialogue arrays depending on
// game progress. Week 0 has the intro where Fait gets into PASUM and the plane crash.
// Other weeks have placeholder dialogues. The special keywords like $CLEAR and $END
// get interpreted by dialogueParser later
#include "structs.hpp"
#include <iostream>

using namespace std;

string* initializeStory(GameState state) {
    switch (state.week) {
        case 0:
            string *dialogues = new string[200]{
                "???: Good evening.",
                "???: It's a bit late here, but I'd like to talk a little about myself.",
                "$CLEAR",
                "Fait: My name is Fait.",
                "Fait: Recently, I got into PASUM! I didn't actually expect to get in, considering my...",
                "...",
                "Fait: Ethnic...",
                "Fait: Anyhow! I'm pretty excited to get into PASUM!",
                "Fait: I'll miss my family, since I'd have to move away from S*rawak.",
                "Fait: Especially, my Ald*n and A*stralia.",
                "Fait: *Yawns*, I guess nothing else to do but to get ready now.",
                "Fait: Good Night!",
                "$CLEAR",
                "...",
                "...",
                "...",
                "...",
                "...",
                "*The plane crashes, Fait suffers a severe head injury.*",
                "$CLEAR",
                "Fait: ...",
                "$END"
            };
            return dialogues;
    }

    string *dialogues = new string[200]{
        "$STREAM",
        "Kuu: If it broke in the middle of playing.",
        "$STREAM",
        "Kuu: Tell me or Faith!",
        "$STREAM",
        "Kuu: Or... Thanks for getting scared?",
        "$STREAM",
        "Kuu: That's all for the prototype. \n Kuu: Thanks for playing! I just wanted to showcase the dialogue system I spent an hour making.\nKuu: You're only supposed to see Week 1, and for the story, I made something up so that I can showcase the code",
        "$END"
    };
    return dialogues;
}

// Purpose: Returns the interlude dialogue that plays between academic and jati diri quizzes
// Why it works: Same structure as initializeStory but for the interludes. Week 0 has
// a scene where someone is checking on Fait after the crash. Theres a creepy streaming
// text moment that says "I WANNA DIE" over and over which is... a choice honestly.
// The $STREAMFAST and $STREAMSLOW keywords control how fast the dialogue appears
string* initializeInterlude(GameState state) {
    switch (state.week) {
        case 0:
            string *dialogues = new string[200]{
                "$CLEAR",
                "???: Follow my finger. Left, right, left, right.",
                "Fait: *Eyes trailing, but lagging behind*",
                "$CLEAR",
                "???: That's enough. So, tell me, Fait, how are you feeling so far?",
                "Fait: I'm feeling fine so far, but I feel a lot more stressed out lately",
                "???: Is it because of PASUM?",
                "Fait: I think so?",
                "???: Have you been feeling it much more intensely?",
                "Fait: I think so...?",
                "Fait: It's just that...",
                "$CLEAR",
                "Fait: ...",
                "Fait: ...",
                "Fait: ...",
                "Fait: ...",
                "Fait: ...",
                "Fait: ...",
                "Fait: ...",
                "Fait: ...",
                "???: ..?",
                "$STREAMFAST",
                "I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE I WANNA DIE",
                "$STREAMSLOW",
                "Fait: I was never the one in control...",
                "$END"
            };
            return dialogues;
}


    string *dialogues = new string[200]{
        "$STREAM",
        "Kuu: If it broke in the middle of playing.",
        "$STREAM",
        "Kuu: Tell me or Faith!",
        "$STREAM",
        "Kuu: Or... Thanks for getting scared?",
        "$STREAM",
        "Kuu: That's all for the prototype.",
        "$STREAM",
        "Kuu: Thanks for playing! I just wanted to showcase the dialogue system I spent an hour making.",
        "$END"
    };
    return dialogues;
}
