#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;


    vector<int>v;

    for(int i = 0;i<n;i++){
        int x;
        cout<<"Enter v["<<i<<"]: ";
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
   for(int i = 0;i<n ;i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;

   vector<int>v2(v.size());
   for(int i = 0;i<v.size();i++){
    v2[i] = v[v.size()-1-i];
   }

   for(int i = 0;i<n ;i++){
    cout<<v2[i]<<" ";
   }



    return 0;
}