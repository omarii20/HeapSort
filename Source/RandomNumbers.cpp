#include "../Header/RandomNumbers.h"

RandomNumbers::RandomNumbers() {
    srand(time(0));             // Seed the random number generator
}

std::vector<int> RandomNumbers::generateRandomArray(int size) {
    std::vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1024; // Random numbers between 0 and 1023
    }
    return arr;
}

std::map<char, std::vector<int>> RandomNumbers::generateRandomArrays(int* randomNumberCount, int length) {
    std::map<char, std::vector<int>> randomArrays;      //create map with key CHAR (name of the array) and vector of random numbers

    for (int i = 0; i < length; ++i) {
        std::vector<int> arr = generateRandomArray(randomNumberCount[i]);
        randomArrays['A'+i] = arr;
        std::cout << "\033[35m" << "Array " << (char)('A' + i) << " (" << randomNumberCount[i] << " elements): " << "\033[0m";

        for (int num : arr) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    return randomArrays;
}
