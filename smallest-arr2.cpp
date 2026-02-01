
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int nums[] = {9, 2, 33, 4, -5};
    int size = 5;
    int smallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        smallest = min(smallest, nums[i]);
    }
    cout << "Smallest number is: " << smallest << endl;
    return 0;
}
