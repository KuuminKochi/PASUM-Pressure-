# Note: The tasks assigned are all AI-generated. The code is not.

# PASUM Pressure! 🎮

A text-based C++ game where you step into the shoes of a PASUM student,
balancing academics, moral values, and mental health across 7 weeks of
foundation life. Make the right choices — or burn out trying.

> "Success is not only about grades, but also about resilience,
> self-awareness, and well-being."

---

## Team

| Name | Role |
|------|------|
| Anthonny Ng Hon Wei | Lead Developer, Documentation |
| Faith Law Lyk Tong | UI Functions, Documentation |
| Nyla Safiyyah binti Mohammed Amin | Content, PAC |
| Muhammad Faris bin Mohd Zamberi | Content, IPO |

**Supervisor:** Sir Annas
**Course:** FAC1003 Programming 2 — Centre for Foundation Studies in Science, UM

---

## How to Run

### Requirements
- A C++ compiler (g++ recommended)
- Terminal / Command Prompt

### Compile
```bash
g++ -std=c++17 -o pasum_pressure main.cpp
```

### Run
```bash
./pasum_pressure
```

### Windows
```bash
g++ -std=c++17 -o pasum_pressure.exe main.cpp
pasum_pressure.exe
```

---

## How to Play

1. Launch the game
2. Read the story — press Enter to advance
3. Choose your academic subject (Chemistry / Physics / Mathematics)
4. Answer the quiz questions (1–4)
5. Answer the Jati Diri moral scenario questions
6. See how your stress level affects your performance
7. Reach Week 7 and find out your ending

### Win Conditions
| Metric | Required |
|--------|----------|
| Academic Score | ≥ 70% |
| Jati Diri Score | ≥ 80% |
| Stress Level | < 50% |

---

## Game Structure
Week 1–7

├── Story Dialogue

├── Academic Quiz (Chemistry / Physics / Math)

│   ├── Pass (≥ 50%) → Academic +10

│   └── Fail (< 50%) → Stress +10, show notes

├── Interlude

├── Jati Diri Quiz

│   ├── Pass (≥ 80%) → No change

│   └── Fail (< 80%) → Stress ×1.2

├── Interlude

└── Stress Check

├── Stress < 50 → Healthy Route, Stress ×0.5

└── Stress ≥ 50 → Counsellor Route

---

## Project Progress

### Anthonny — Developer Tasks

#### Architecture & Setup
- [ ] Project file structure
- [ ] `struct Question`
- [ ] `struct GameState`
- [ ] `main()` game loop
- [ ] `initializeGame()`

#### Core Game Logic
- [ ] `runAcademicQuiz()`
- [ ] `runJatiDiriQuiz()`
- [ ] `checkStress()`
- [ ] `displayStory()`
- [ ] `displayInterlude()`
- [ ] `endingEvaluator()`

#### Data & File Handling
- [ ] Question loader (`ifstream`, `getline`)
- [ ] Question parser into `Question` array
- [ ] Story text parser from `story.txt`
- [ ] File-not-found error handling

#### Pointers & Memory
- [ ] Dynamic allocation for `string* options`
- [ ] `delete[]` cleanup after each quiz

#### STL Integration
- [ ] `std::vector<Question>` for question banks
- [ ] `std::map<string, vector<Question>>` for subject mapping

#### Integration
- [ ] Plug in `displayBar()`
- [ ] Plug in `displayWeekSummary()`
- [ ] Plug in `getValidInput()`
- [ ] Plug in `displaySubjectMenu()`
- [ ] Plug in `displayQuestion()`

#### Polish & Final Assembly
- [ ] `clearScreen()` and scene transitions
- [ ] Edge case: stress exactly 50.0
- [ ] Edge case: all quizzes failed
- [ ] Edge case: all quizzes passed
- [ ] Edge case: invalid inputs
- [ ] Header comment block
- [ ] Inline comments on all calculations
- [ ] Function comments
- [ ] Final compile — zero warnings

---

### Faith — UI & Programming Tasks

- [ ] `displayBar()` — progress bar display
- [ ] `displayWeekSummary()` — end of week score screen
- [ ] `getValidInput()` — input validation loop
- [ ] `displaySubjectMenu()` — subject selection menu
- [ ] `displayQuestion()` — single question display

---

### Faith — Content Tasks

- [ ] Week story dialogues (Week 1–7)
- [ ] Interlude dialogues (2 per week, 14 total)
- [ ] Counsellor route dialogue
- [ ] Healthy route dialogue
- [ ] Good ending text + quotes + tips
- [ ] Bad ending text + quotes

---

### Nyla — Content Tasks

- [ ] Academic quiz questions — Chemistry (10 questions)
- [ ] Academic quiz questions — Physics (10 questions)
- [ ] Academic quiz questions — Mathematics (10 questions)
- [ ] Jati Diri quiz questions (10 questions)

---

### Faris — Documentation Tasks

- [ ] Coding Proposal template filled in
- [ ] Abstract written
- [ ] Impact on Stakeholders written
- [ ] Conclusion written
- [ ] References listed
- [ ] Sem 1 problems & solutions section written

---

## Important Dates

| Milestone | Date |
|-----------|------|
| All content submitted to Anthonny | 1 April 2026 |
| Coding Proposal submission | 3 April 2026 (Friday) |
| Presentation Week 1 | 6–10 April 2026 |
| Presentation Week 2 | 13–17 April 2026 |

---

## File Structure
pasum-pressure/

├── main.cpp

├── questions.dat

├── story.txt

└── README.md

---

## Built With

- C++17
- Standard Template Library (STL)
- Pure terminal / text interface
