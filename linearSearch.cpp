
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Key found at index i
        }
    }
    return -1; // Key not found
}
int main() {
    int nums[] = {9, 2, 33, 4, -5};
    int size = sizeof(nums) / sizeof(nums[0]);
    int key = 33;

    int result = linearSearch(nums, size, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}