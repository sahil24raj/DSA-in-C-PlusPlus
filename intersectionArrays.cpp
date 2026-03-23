#include <iostream>
using namespace std;

void printIntersection(int a[], int b[], int n, int m) {
    cout << "Intersection Elements: ";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }
}

int main() {
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;
    int a[n];

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;
    int b[m];

    cout << "Enter elements of second array: ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    printIntersection(a, b, n, m);
    return 0;
}
