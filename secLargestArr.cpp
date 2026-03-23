
#include <iostream>
#include <climits>
using namespace std;
int main()
{
 int arr[]={1,2,3,4,5};
 int n= sizeof(arr)/sizeof(arr[0]);
 int mx= INT_MIN;
 int smx= INT_MIN;
    for(int i=0;i<n;i++){
    if(arr[i]>mx){
        mx=arr[i];
    }
    else if(arr[i]>smx && arr[i]!=mx){
        smx=arr[i];
    }
 }
 cout<<"maximum element : "<<mx<<endl;
    cout<<"second maximum element : "<<smx;

}