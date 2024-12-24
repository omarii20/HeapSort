#ifndef HEAPSORT_H
#define HEAPSORT_H

#include <vector>

class HeapSort {
public:
    HeapSort(int d);  // Constructor to initialize d-ary heap size
    
    // Method to perform heap sort on a given vector
    void heapsort(std::vector<int>& arr);

    // To incorporate d-ary heap formatting with commas
    void printDaryHeap(const std::vector<int>& arr, char key);

    // Function to print the comparison and swap counts
    void printStats();
    
private:
    int d;               // The d-ary heap value
    int comparisons;     // variable for counting comparison
    int copies;          // variable for counting swap
    
    // Heapify the heap for the given index
    void heapify(std::vector<int>& arr, int n, int i);
    
    // Build the heap for sorting
    void buildHeap(std::vector<int>& arr, int n);
};

#endif
