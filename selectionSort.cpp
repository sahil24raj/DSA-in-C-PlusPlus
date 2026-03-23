#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[]={5,2,3,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mn=INT_MAX;
    int minidx=-1;
    for(int i=0;i<n-1;i++){
       if(mn>arr[i]){
           mn=arr[i];
           minidx=i;
       }                    swap(arr[i],arr[minidx]);   
    }
// Print the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}