// Copyright (C) 2021 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on January 2021
// This program generates 10 random numbers and finds the greatest one


#include <iostream>
#include <random>
#include <array>

template<size_t N>
int FindMax(std::array<int, N> listOfRandoms) {
    // determines greatest number out of array

    int greatest = listOfRandoms[0];

    for (int counter = 0; counter < listOfRandoms.size(); counter++) {
        if (greatest < listOfRandoms[counter]) {
            greatest = listOfRandoms[counter];
        }
    }

    return greatest;
}

int main() {
    // This program generates 10 random numbers

    std::array<int, 10> listOfRandoms;
    int randomNumber = 0;
    int greatest;
    int final = 0;

    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        // generate random
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(0, 100);
        randomNumber = idist(rgen);

        std::cout << "Random number: " << randomNumber << std::endl;

        // stores random number in array
        listOfRandoms[loopCounter] = randomNumber;
    }

    final = FindMax(listOfRandoms);

    std::cout << " " << std::endl;

    std::cout << "Greatest: " << final << std::endl;
}
