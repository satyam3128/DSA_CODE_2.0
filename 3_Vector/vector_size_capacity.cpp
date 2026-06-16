#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int>v;
    v.push_back(1);
    v.push_back(12);
    v.push_back(15);
    v.push_back(16);
    v.push_back(17);
    v.push_back(18);
    v.push_back(111);
    v.push_back(13);
    
    v.push_back(14);
    v.push_back(4);
    v.push_back(9);
    v.push_back(12);
    v.push_back(133);

    cout<<"Size: "<<v.size();
    cout<<" Capacity :"<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<"Size: "<<v.size();
    cout<<" Capacity :"<<v.capacity()<<endl;




    return 0;
}
