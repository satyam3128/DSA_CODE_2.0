#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>v(5,9);
    cout<<"Size: "<<v.size();
    cout<<" Capacity :"<<v.capacity()<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;


    return 0;
}