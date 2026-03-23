
#include <iostream>
using namespace std;
int top= -1;

int main()
{
 int arr[]={1,2,3,4,5};
 int n= sizeof(arr)/sizeof(arr[0]);
 int x;
 cout<<"Enter the element to be searched: ";
 cin>>x;
 bool flag=false;   

  for(int i=0;i<n;i++) {
     if(arr[i]==x)
     {
            flag=true;
         break;
     }
}
if(flag==true)
cout<<x<<" is found in the array.";
else cout<<x<<" is not found in the array.";
}