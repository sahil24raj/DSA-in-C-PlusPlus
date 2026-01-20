
#include <iostream>
using namespace std;
int nCr(int n, int r)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}
int main()
{
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;
    int result = nCr(n, r);
    cout << "C(" << n << ", " << r << ") = " << result << endl;
    return 0;
}