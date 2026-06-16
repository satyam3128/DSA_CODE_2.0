#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int>v;
    int n ;
    cout<<"Enter size:";
    cin>>n;
    for(int i = 0;i<n ;i++){
        int x ;
        cout<<"Enter "<<"v["<<i<<"] :";
        cin>>x;
        v.push_back(x);
    }
    
    for(int i = 0;i<n ;i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

    sort(v.begin(),v.end());

     for(int i = 0;i<n ;i++){
        cout<<v[i]<<" ";
    }

    


    return 0;
}