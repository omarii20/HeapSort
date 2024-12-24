#include <iostream>
#include <map>
#include "./Header/RandomNumbers.h"
#include "./Header/HeapSort.h"

using namespace std;

// Define a color for HEAPSORT header
const string HEADER_COLOR = "\033[33m"; // Yellow
const string RESET_COLOR = "\033[0m";   // Reset

int main() {
    // Step 1: Generate Random Arrays
    RandomNumbers randomGen;
    int _randomNumbersCount[3] = {50, 100, 200};
    int length = sizeof(_randomNumbersCount) / sizeof(_randomNumbersCount[0]);        // length of the array _randomNumbersCount
    auto randomArrays = randomGen.generateRandomArrays(_randomNumbersCount, length);  // This generates and prints arrays A50, B100, C200
    
    // Step 2: Perform HeapSort for different d values (2, 3, 4, 5) 
    for (int d = 2; d <= 5; ++d) {
        cout << HEADER_COLOR << "Running HEAPSORT for d = " << d << RESET_COLOR << endl;
        
        for (auto& [key, arr] : randomArrays) {
            HeapSort heapSort(d);
            heapSort.heapsort(arr);  // Perform heap sort

            // Display the sorted array
            cout << HEADER_COLOR  << "Sorted Array " << key << RESET_COLOR <<": ";
            heapSort.printDaryHeap(arr, key);

            // created another way to print the sorted array
            // for (int num : arr) {
            //     cout << color << num << " " << RESET_COLOR; // Apply color and reset
            // }

            // Print the stats for comparisons and swaps(copies)
            heapSort.printStats();

            cout << endl;
        }
    }

    return 0;
}
