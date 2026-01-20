
#include <iostream>
using namespace std;
int decToBinary(int n){
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout << "Binary representation: ";
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
    cout << endl;
    return 0;
}