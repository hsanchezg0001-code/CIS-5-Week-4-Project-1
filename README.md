# Project 1 · Student card

**Week 04 · Project 1**  
**Theme:** Three weeks, one file  
**Type:** Cumulative mini project (replaces the lab and the homework this week)


## Demo video (required)

Paste a link to a short video of you running this project (tool + code + run).
Work without a working video link is incomplete.

In the video: build the program, run it, and type the four answers at the keyboard. Show the card that prints.

**Your demo:** [_my link:)_](https://youtu.be/knGrCONs1ZQ)


## What to build
A student card. The program asks four questions, stores each answer in a variable with the right type, computes one value from a `const` and an operator, and prints a labeled card from those names.

It is small on purpose. The point is that every piece from weeks 1–3 appears in one working file you can explain line by line: the skeleton from week 2, the typed boxes from week 3, and the one operator we introduced this week.

## Requirements
Four requirements, one file. Each one maps to a week.

1. **The skeleton and a file-top comment** (week 2) — `#include <iostream>`, `#include <string>`, one `main`, `return 0`. A comment at the top with your name, the week, and the project name.
2. **Four prompts into typed boxes** (week 3) — `first` (`std::string`), `age` (`int`), `credits` (`int`), `gpa` (`double`). Each initialized on the line it is declared. A `cout` question before every `cin`.
3. **One const and one computed line** (weeks 3–4) — `const int CURRENT_YEAR`. Then one new variable computed with an operator: `grad_year = CURRENT_YEAR + 4`, or `credits_left = 60 - credits`.
4. **A card printed from the names** (weeks 1–4) — a header line, then one labeled line per variable, ending with the computed value. Every number on the screen came out of a box.

## Sample session
```
First name? Herberth
Age? 24
Credits this term? 15
GPA? 2.8
=== Student card ===
Name: Herberth
Age: 24
Credits: 15
GPA: 2.8
Expected graduation: 2030
```

Your prompts and labels can be worded differently. The rule is the same: four answers typed at the keyboard, one computed value, and a card that prints from the variables.

## Starter
`main.cpp` — the skeleton and `CURRENT_YEAR` are there. Each `TODO` names the week it comes from.

## Deliverables
1. Course-visible GitHub repository (fork this repo; the link opens without signing in as you)
2. README: how to compile and run on your path, then a real session pasted in — the four prompts, your answers, and the card
3. Short demonstration video: your tool, your code, and a real run where you type the four answers
4. Canvas: the repository URL and the video link

## Scope fence
One file. No `if`, no loops, no functions. No division — that trap can wait. If you are adding features to impress, you have left the project.

## Integrity
- AI = tutor, not ghostwriter
- Fake ownership → zero
- Due: Monday night (not Sunday)
- Discussions (every week): first post Friday, replies Sunday
- Late: course policy (−10%/day unless stated otherwise)

## Rubric (100)
| Criterion | Pts |
|-----------|----:|
| Runs correctly on a supported path | 40 |
| Meets the four requirements | 30 |
| Labeled output printed from the variable names | 15 |
| Repository + README + demonstration video | 15 |

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and a real run where you type the four answers and the card prints.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
