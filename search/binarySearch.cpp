#include "binarySearch.hpp"
#include <vector>
#include <iostream>

Values busqBinaria(const std::vector<int>& vec, int target) {
    int left = 0, right = vec.size() - 1, count{};

    while (left <= right) {
        ++count;
        int mid = left + (right - left) / 2;
        if (vec[mid] == target) {
            return {mid, count};
        } else if (vec[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return {-1, count};
}