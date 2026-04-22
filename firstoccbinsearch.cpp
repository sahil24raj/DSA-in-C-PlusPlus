#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 2, 3, 4, 2, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int lo = 0, hi = n - 1, idx = -1;
    bool flag = false;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target)
        {
            idx = mid;
            flag = true;
            break;
        }
        else if (arr[mid] > target)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }

    if (flag == true)
    {
        cout << "index = " << idx;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}