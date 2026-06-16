#include<iostream>
#include<vector>
using namespace std;
// call by value 

// void change(vector<int>a){
//     a[0] = 100;
// }

void change(vector<int>&a){
    a[0] = 893;
}

int main(){

    vector<int>v;
    v.push_back(10);
    v.push_back(22);
    v.push_back(124);

    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    v.at(2) = 999;
    cout<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    change(v);
     cout<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }





    return 0;

}