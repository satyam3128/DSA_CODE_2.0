#include<iostream>
#include<vector>
using namespace std;
int main(){

    int x;
    cout<<"Enter the Target:";
    cin>>x;

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
    cout<<"INDEX"<<"==>"<<"Elements"<<endl;
    for(int i = 0 ;i<v.size()-1;i++){

        for(int j = i+1 ;j<v.size();j++){
            if(v[i]+v[j] == x){
                cout<<"("<<i<<","<<j<<")"<<"==>"<<v[i]<<" "<<v[j]<<endl;
            }
        }

    }


    return 0;
}