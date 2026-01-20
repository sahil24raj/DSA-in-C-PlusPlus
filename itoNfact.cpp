
#include <iostream>
using namespace std;
int ItoNFact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n, fact;
    cout << "Enter a number: ";
    cin >> n;
    fact = ItoNFact(n);
    cout << "The factorial of 1 to " << n << " is: " << fact << endl;
    return 0;
}