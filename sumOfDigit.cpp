
#include <iostream>
using namespace std;
int sumOfDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n, sum;
    cout << "Enter a number: ";
    cin >> n;
    sum = sumOfDigits(n);
    cout << "The sum of digits of " << n << " is: " << sum << endl;
    return 0;
}