# PASUM Pressure! - Developer Task Checklist
**For: Anthonny Ng Hon Wei | FAC1003 Programming 2**

---

## Architecture & Setup

- [x] Set up project file structure (`main.cpp`, `questions.dat`, `story.txt`)
- [x] Define `struct Question` with `string* options` pointer array
- [x] Define `struct GameState` with `week`, `academic`, `jatiDiri`, `stress`
- [x] Write `main()` entry point with `while` game loop (week 1–7)
- [x] Write `initializeGame()` to set all starting values

---

## Core Game Logic

- [ ] Write `runAcademicQuiz()` — score questions, apply +10 academic or +10 stress
- [ ] Write `runJatiDiriQuiz()` — score questions, apply `stress *= 1.2` if < 80%
- [ ] Write `checkStress()` — branch into Counsellor or Healthy route at threshold 50
- [ ] Write `displayStory(int week)` — pull and display correct week narrative
- [ ] Write `displayInterlude()` — display interlude text between quiz sections
- [ ] Write `endingEvaluator()` — check all three conditions, trigger correct ending

---

## Data & File Handling

- [ ] Write question loader using `ifstream` and `getline`
- [ ] Parse question text and options into `Question` array
- [ ] Parse story and interlude text from `story.txt` by week number
- [ ] Handle file-not-found error with a clear message and safe exit

---

## Pointers & Memory

- [ ] Dynamically allocate `string* options = new string[4]` per question
- [ ] Free memory with `delete[]` after each quiz module finishes

---

## STL Integration

- [ ] Use `std::vector<Question>` to store loaded questions per subject
- [ ] Use `std::map<string, vector<Question>>` to map subject name to question bank

---

## Integration (Faith's Functions)

- [ ] Plug `displayBar()` into weekly summary and stress check screens
- [ ] Plug `displayWeekSummary()` at the end of each week loop iteration
- [ ] Plug `getValidInput()` into all answer reading sections
- [ ] Plug `displaySubjectMenu()` into academic quiz subject selection
- [ ] Plug `displayQuestion()` into both quiz modules

---

## Polish & Final Assembly

- [ ] Write `clearScreen()` for scene transitions
- [ ] Test edge case — stress exactly 50.0
- [ ] Test edge case — all academic quizzes failed
- [ ] Test edge case — all quizzes passed perfectly
- [ ] Test edge case — non-numeric and out-of-range inputs
- [ ] Write header comment block (author, date, description, instructions)
- [ ] Write inline comments for all calculation logic
- [ ] Write function comments (purpose, parameters, return value)
- [ ] Final compile with zero warnings
- [ ] Package and submit via team leader before 3 April 2026

---

## Submission Checklist

- [ ] All source files compiling cleanly
- [ ] `questions.dat` included in submission
- [ ] `story.txt` included in submission
- [ ] Coding Proposal document completed
- [ ] Problems from Sem 1 section written
- [ ] Submitted to https://forms.gle/GkyxQm3FaVWCDJLn6 by Week 14

---

*Document prepared by: Anthonny Ng Hon Wei*
*Last updated: March 2026*
