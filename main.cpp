// Name: Herberth Sanchez-Gomez
// Week: Week 04
// Project: Project 1 - Student card

#include <iostream>
#include <string>

int main() {
    // 1. Constant definition
    const int CURRENT_YEAR = 2026;

    // 2. Variable declarations with initializations
    std::string first = "";
    int age = 0;
    int credits = 0;
    double gpa = 0.0;

    // 3. User input prompts
    std::cout << "First name? ";
    std::cin >> first;

    std::cout << "Age? ";
    std::cin >> age;

    std::cout << "Credits this term? ";
    std::cin >> credits;

    std::cout << "GPA? ";
    std::cin >> gpa;

    // 4. Computation using the constant and an operator
    int grad_year = CURRENT_YEAR + 4;

    // 5. Output the student card
    std::cout << "\n=== Student card ===" << std::endl;
    std::cout << "Name: " << first << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Credits: " << credits << std::endl;
    std::cout << "GPA: " << gpa << std::endl;
    std::cout << "Expected graduation: " << grad_year << std::endl;

    return 0;
}