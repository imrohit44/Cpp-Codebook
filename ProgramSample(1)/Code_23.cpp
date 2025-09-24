#include <iostream>
#include <vector>
#include <algorithm>

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Not found
}

int main() {
    std::vector<int> sortedArr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;
    int index = binarySearch(sortedArr, target);
    if (index != -1) {
        std::cout << "Element " << target << " found at index " << index << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }
    return 0;
}