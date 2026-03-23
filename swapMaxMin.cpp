#include <iostream>
using namespace std;

void swapMaxMin(int arr[], int n) {
    int minIndex = 0;
    int maxIndex = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if(arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    cout << "Array after swapping max and min: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 2, 30, 55, 7,6 };
    int n = 6;

    swapMaxMin(arr, n);

    return 0;
}
