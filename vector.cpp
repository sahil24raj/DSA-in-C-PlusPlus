
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>vec;
    vec.push_back(0);
    vec.push_back(6);
    vec.push_back(8);
    vec.push_back(81);
    vec.push_back(76);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    return 0;
}
