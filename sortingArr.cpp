#include <iostream>
#include <vector>
using namespace std;
void sortZeroesAndOnes(vector<int> &v)
{
    int countZeroes = 0;

    for (int ele : v)
    {
        if (ele == 0)
        {
            countZeroes++;
        }
    }
    size_t i = 0;
    while (countZeroes--)
    {
        v[i++] = 0;
    }
    while (i < v.size())
    {
        v[i++] = 1;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr[i] = ele;
    }
    sortZeroesAndOnes(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}