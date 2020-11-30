// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Nov 2020
// This program guessing number is 5

#include <iostream>

int main() {
    // this function guessing number is 5

    const int CORRECT_NUMBER = 5;
    int your_number;

    // input
    std::cout << "Enter your number: ";
    std::cin >> your_number;

    // process
    if (your_number == CORRECT_NUMBER) {
            // output
            std::cout << "Correct!";
    }
}
