
#include <iostream>
using namespace std;

int OnetoN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int n, sum;
    cout << "Enter a number: ";
    cin >> n;
    sum = OnetoN(n);
    cout << "The sum from 1 to " << n << " is: " << sum << endl;
    return 0;
}