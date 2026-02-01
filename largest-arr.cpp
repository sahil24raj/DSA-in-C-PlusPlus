
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int nums[] = {9, 2, 33, 4, -5};
    int size = 5;
    int largest = INT_MIN;
    int largestIndex = 0;
    for (int i = 0; i < size; i++)
    {
        largest = max(largest, nums[i]);
        if (nums[i] == largest)
        {
            largestIndex = i;
        }
    }
    cout << "Largest number is: " << largest << endl;
    cout << "Index of largest element: " << largestIndex << endl;
    return 0;
}
