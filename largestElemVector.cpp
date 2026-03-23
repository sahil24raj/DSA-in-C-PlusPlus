#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
        cout<<v[i]<<" ";
    }
    int l=0;
    for(int i=0;i<5;i++){
        if(l<v[i]){
            l=v[i];
        }
    }
    cout<<"\n largest element is: ";
    cout<<l<<endl;
}
