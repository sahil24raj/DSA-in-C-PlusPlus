#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    //for loop
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";    
    }
    cout<<endl;
    //for each loop
    for(int x:v){
        cout<<x<<" ";
    }   
    cout<<endl;
    //while loop
    int i=0;
    while(i<v.size()){
        cout<<v[i]<<" ";
        i++;
    }
    return 0;
}