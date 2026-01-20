#include <iostream>
using namespace std;
int binToDecimal(int binNum)
{
    int ans = 0, pow = 1;
    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += rem * pow;
        pow *= 2;
        binNum /= 10; // Missing line
    }
    return ans;
}
int main()
{
    cout << binToDecimal(1010) << endl; // Example usage
    return 0;
}