#include <array>
#include <vector>
#include <iostream>

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


template<size_t N>
int binarySearchFirst(const std::array<int, N>& arr, int target) {
    int index = binarySearch(arr, target);  
    if (index == -1) return -1;            

   
    while (index > 0 && arr[index - 1] == target) {
        --index;
    }
    return index;
}


int binarySearchFirst(const std::vector<int>& vec, int target) {
    int index = binarySearch(vec, target);  
    if (index == -1) return -1;           

   
    while (index > 0 && vec[index - 1] == target) {
        --index;
    }
    return index;
}

