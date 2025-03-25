// Copyright 2025 Viviana Hurtado
// Created by Viviana Hurtado
// March 25, 2025
// This program asks the user to guess a number between 0 and 9
#include <iostream>
int main() {
    // Set the correct number
    const int CORRECT_NUMBER = 5;
    int user_guess;

    // Ask user for a guess
    std::cout << "Guess a number between 0 and 9: ";
    std::cin >> user_guess;

    // Check if the guess is correct
    if (user_guess == CORRECT_NUMBER) {
        std::cout << "You guessed correctly!" << std::endl;
    }

    // Check if the guess is incorrect
    if (user_guess != CORRECT_NUMBER) {
        std::cout << "You guessed wrong" << std::endl;
    }

    return 0;
}
