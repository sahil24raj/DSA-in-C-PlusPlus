
#include <iostream>
using namespace std;
int arraySum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int result = arraySum(arr, size);
    cout << "Sum of array elements: " << result << endl;
    return 0;
}