
#include <iostream>
using namespace std;
int primeCheck(int n){

}

int main(){
    
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if(primeCheck(number)){
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
    return 0;
}