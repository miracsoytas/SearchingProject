#include <array>
#include <vector>
#include <iostream>

// Example binary search function for std::array
int binarySearch(const std::array<int, 5>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

// Example binary search function for vector
int binarySearch(const std::vector<int>& vec, int target) {
    int left = 0, right = vec.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (vec[mid] == target) return mid;
        else if (vec[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

// Modified binarySearchFirst function for std::array
template<size_t N>
int binarySearchFirst(const std::array<int, N>& arr, int target) {
    int index = binarySearch(arr, target);  // Initial search for an occurrence of the target
    if (index == -1) return -1;             // Target not found at all

    // Check for the first occurrence
    while (index > 0 && arr[index - 1] == target) {
        --index;
    }
    return index;
}

// Modified binarySearchFirst function for vector
int binarySearchFirst(const std::vector<int>& vec, int target) {
    int index = binarySearch(vec, target);  // Initial search for an occurrence of the target
    if (index == -1) return -1;             // Target not found at all

    // Check for the first occurrence
    while (index > 0 && vec[index - 1] == target) {
        --index;
    }
    return index;
}

