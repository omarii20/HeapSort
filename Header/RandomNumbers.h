#ifndef RANDOMNUMBERS_H
#define RANDOMNUMBERS_H

#include <vector>
#include <map>
#include <cstdlib>
#include <ctime>
#include <iostream>

class RandomNumbers {
public:
    RandomNumbers(); // Constructor to seed random number generator

    // Method to generate and display random arrays A, B, and C
    //map<char, vector<int>> , for every array has a vector : A = {vector of numbers from 0-1023}
    std::map<char, std::vector<int>> generateRandomArrays(int* randomNumberCount, int length);

private:
    // Method to generate a random array of a given size
    std::vector<int> generateRandomArray(int size);
};

#endif
