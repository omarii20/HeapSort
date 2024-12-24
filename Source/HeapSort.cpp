#include "../Header/HeapSort.h"
#include <iostream>
#include <map>
#include <string>


// Constructor to initialize d
HeapSort::HeapSort(int d) : d(d), comparisons(0), copies(0) {}

// Function to heapify the subtree rooted at index i
void HeapSort::heapify(std::vector<int>& arr, int n, int i) {
    int largest = i;
    for (int j = 1; j <= d; ++j) {
        int child = d * i + j;
        if (child < n) {
            comparisons++;              // Counting the comparison
            if (arr[child] > arr[largest]) {
                largest = child;
            }
        }
    }

    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        copies++;                       // Counting the swap(copies)
        heapify(arr, n, largest); 
    }
}

// Function to build a d-ary heap
void HeapSort::buildHeap(std::vector<int>& arr, int n) {
    for (int i = n / d - 1; i >= 0; --i) {
        heapify(arr, n, i);  
    }
}

// Function to perform heap sort
void HeapSort::heapsort(std::vector<int>& arr) {
    int n = arr.size();                 
    comparisons = 0;                    // Reset comparisons count
    copies = 0;                         // Reset swaps count
    
    buildHeap(arr, n);  

    for (int i = n - 1; i >= 1; --i) {
        std::swap(arr[0], arr[i]);
        copies++;                       // Counting the swap(copies)
        heapify(arr, i, 0);  
    }
}

// Function to print the array in the desired format
void HeapSort::printDaryHeap(const std::vector<int>& arr, char key) {

    // Define color mapping based on array keys
    std::map<char, std::string> arrayColors = {
        {'A', "\033[31m"}, // Red
        {'B', "\033[32m"}, // Green
        {'C', "\033[34m"}, // Blue
    };

    const std::string RESET_COLOR = "\033[0m";
    std::string color = arrayColors.count(key) ? arrayColors[key] : RESET_COLOR; 

    for (size_t i = 0; i < arr.size(); ++i) {
        if (i==0) std::cout << color << arr[i] << ", ";     // the first number it is a root.
        if (i % d == 0 && i != 0) {                         // split the d children.
            std::cout << color << ", ";
        }
        std::cout << color << arr[i] << " " << RESET_COLOR;
    }
    std::cout << std::endl;
}


// Function to print the comparison and swap counts
void HeapSort::printStats() {
    std::cout << "Comparisons: " << comparisons << ", Copies: " << copies << std::endl;
}