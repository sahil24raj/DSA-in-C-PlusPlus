#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"enter target element: ";
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x)
        {
            cout<<"Element found at index: "<<i;
             break;
        }
    }
    cout<<"Element not found in the array.";
} 