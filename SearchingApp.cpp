#include <iostream>
#include <array>
#include <vector>

// Function prototypes (assumes functions are defined in Searching.cpp)
template<size_t N>
int binarySearchFirst(const std::array<int, N>& arr, int target);

int binarySearchFirst(const std::vector<int>& vec, int target);

int main() {
    // Test case for std::array
    std::array<int, 5> arr = {1, 2, 2, 2, 3};
    int targetArray = 2;
    int indexArray = binarySearchFirst(arr, targetArray);
    std::cout << "First occurrence in std::array: " << indexArray << std::endl;

    // Test case for std::vector
    std::vector<int> vec = {1, 2, 2, 2, 3};
    int targetVector = 2;
    int indexVector = binarySearchFirst(vec, targetVector);
    std::cout << "First occurrence in std::vector: " << indexVector << std::endl;

    // Edge case: target not found
    int targetNotFound = 4;
    int indexNotFoundArray = binarySearchFirst(arr, targetNotFound);
    int indexNotFoundVector = binarySearchFirst(vec, targetNotFound);
    std::cout << "Target not found in std::array: " << indexNotFoundArray << std::endl;
    std::cout << "Target not found in std::vector: " << indexNotFoundVector << std::endl;

    return 0;
}


