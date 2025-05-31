# 🧠 Science KBC - C++ Quiz Game

A **console-based quiz game** built using C++ that mimics the style of "Kaun Banega Crorepati" (KBC), focusing on science-based questions. Players answer multiple-choice questions and can use lifelines to skip questions under certain conditions.

---

## 🕹️ Gameplay Overview

- Total of **10 questions**.
- Each correct answer increases your cash prize.
- Two lifelines:
  - **Pay Half and Skip**: Lose 25% of the current question value to skip.
  - **Leave Question**: Skip without any penalty.
- Lifelines are **recharged** based on consecutive right answers:
  - 3 in a row: Pay Half & Skip is restored.
  - 5 in a row: Leave Question is restored.

---

## 🧾 Features

- Randomly chosen questions
- Question value **doubles** after every round
- Tracks:
  - Right answers
  - Wrong answers
  - Cash earned or lost
- Displays a final results summary

---

## 🛠️ Technologies Used

- C++
- `<iostream>`, `<string>`, `<cstdlib>`, `<ctime>`, `<conio.h>`

---

## 📦 How to Run

### 💻 Requirements:
- C++ Compiler (e.g., g++, Turbo C++, Code::Blocks, Visual Studio)

### 🛠️ Steps:
1. Copy the code into a file named `science_kbc.cpp`
2. Compile using terminal or an IDE:

```bash
g++ science_kbc.cpp -o science_kbc
