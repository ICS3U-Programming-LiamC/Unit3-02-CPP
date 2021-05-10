// Copyright (c) 2021 Liam Csiffary All rights reserved.
//
// Created by: Liam Csiffary
// Date: May 10, 2021
// This program picks a number between 0, 9
// and then has the user try to guess it


#include <iostream>

// got this library from a website while I was trying to
// make random numbers got it from
// https://www.bitdegree.org/learn/random-number-generator-cpp#random-numbers-between-1-and-10
#include <cstdlib>

// declares variables
int user_num;
int random_num;

// main function8
int main() {
    // this code is also from that same wabsite, it
    // makes it so that theb number generated is
    // everytime the code runs
    srand((unsigned) time(0));
    // create the random number
    random_num = (rand() % 9);

    // just a test so I can test easier
    std::cout << random_num;

    // get users input for their guess
    std::cout << "\nGuess a number between 0, 9: ";
    std::cin >> user_num;

    // if the user guessed right the first time
    if (user_num == random_num) {
        std::cout << "You are correct!";
    }

    // if the user guessed wrong the first time
    if (user_num != random_num) {
        // tell user they are wrong, then have them guess again
        std::cout << "You are incorrect" << std::endl;
        std::cout << "Guess again: ";
        std::cin >> user_num;

        // if they were right the second time
        if (user_num == random_num) {
            std::cout << "You are correct!";
        }
        // if they were wrong again
        if (user_num != random_num) {
            std::cout << "You are incorrect";
        }
    }
}
