

#include <iostream>
using namespace std;
int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  cout<<"Enter a,b,c: "<<a<<" "<<b<<" "<<c<<endl;
if(a+b>c && a+c>b && b+c>a)
  cout<<"Triangle can be formed"<<endl;
else
  cout<<"Triangle cannot be formed"<<endl;
  return 0;

}
