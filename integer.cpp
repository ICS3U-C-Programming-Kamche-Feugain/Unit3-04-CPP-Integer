// Copyright (c) 2026 Kamche All rights reserved.
// .
// Created by: Your Kamche
// Date: Oct 15, 2026
// This program asks the user for an integer
// and checks whether the number is positive
// negative or equal to zero.
#include <iostream>

int main() {
    // Declare variable
    int number;

    // Ask the user for a number
    std::cout << "Enter a number that is an integer: ";
    std::cin >> number;

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        std::cout << "Your number is a positive integer."
                  << std::endl
    } else if (number < 0) {
        std::cout << "Your number is a negative integer."
                  << std::endl
    } else {
        std::cout << "Your number is equal to zero."
                  << std::endl
    }
}