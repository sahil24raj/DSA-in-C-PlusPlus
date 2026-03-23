#include <iostream>
#include <vector>
using namespace std;
void evenOdddSorting(vector<int> &v)
{
   int evenIndex = 0;
   int oddIndex = 1;
   while(evenIndex < v.size() && oddIndex < v.size())
   {
       if(v[evenIndex] % 2 == 0)
       {
           evenIndex += 1;
       }
       else if(v[oddIndex] % 2 != 0)
       {
           oddIndex += 1;
       }
       else
       {
           swap(v[evenIndex], v[oddIndex]);
           evenIndex += 1;
           oddIndex += 1;
       }
   }    
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v[i] = ele;
    }
    evenOdddSorting(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}