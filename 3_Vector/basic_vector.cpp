#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>v;
    v.push_back(10);
    // cout<<v.size()<<endl;
     cout<<v.capacity()<<endl;
    

    v.push_back(19);
    //  cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(12);
    //  cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(14);
    //  cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(15);
    
    //  cout<<v.size()<<endl;
    cout<<v.capacity()<<endl; 

    v.pop_back();

    cout<<v.capacity()<<endl; 
    v.pop_back();

    
    
    cout<<v.capacity();

    cout<<endl;


    for(int i = 0;i<v.size() ;i++){
        cout<<v[i]<<" ";
    }

    







    return 0;
}