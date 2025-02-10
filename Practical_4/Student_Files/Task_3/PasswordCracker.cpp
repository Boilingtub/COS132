#include "PasswordCracker.h"

// Assuming these are declared in the header file or beforehand
std::string password;
std::string revealed;
std::vector<bool> revealedPositions;

// ANSI color codes
const std::string RED = "\033[31m";      // Red for incorrect characters
const std::string GREEN = "\033[32m";    // Green for correct characters
const std::string YELLOW = "\033[33m";   // Yellow for almost correct characters
const std::string RESET = "\033[0m";     // Reset to default terminal color

void initializePasswordCracker(const std::string& pwd) {
    password = pwd;
    revealed = std::string(pwd.size(), '_');
    revealedPositions.resize(pwd.size(), false);
}

// New function to determine if a guess is almost correct
bool isAlmostCorrect(char guess, char actual) {
    int diff = abs(guess - actual);
    return diff > 0 && diff <= 2;
}

void checkOutput(char output, int index) {
    if (index < password.length()) {
        if (output == password[index]) {
            revealedPositions[index] = true;
            revealed[index] = password[index];
        } else if (isAlmostCorrect(output, password[index])) {
            // If almost correct, we'll show the character in yellow without updating the revealed position
            revealed[index] = output;  // Optional: You may choose not to reveal almost correct guesses
        }
        // Do not update the revealed string or revealedPositions if the guess is wrong
    }
    displayProgress();
}

void displayProgress() {
    std::cout << "Password Progress: ";
    for (std::size_t i = 0; i < revealed.size(); ++i) {
        if (revealedPositions[i]) {
            // Correct character, display in green
            std::cout << GREEN << revealed[i] << RESET;
        } else if (revealed[i] != '_' && isAlmostCorrect(revealed[i], password[i])) {
            // Almost correct character, display in yellow
            std::cout << YELLOW << revealed[i] << RESET;
        } else {
            // Incorrect character, display in red
            std::cout << RED << revealed[i] << RESET;
        }
    }
    std::cout << std::endl;

    if (revealed == password) {
        std::cout << GREEN << "Welcome to Codebrew servers!! User: CEO" << RESET << std::endl;
    }
}
