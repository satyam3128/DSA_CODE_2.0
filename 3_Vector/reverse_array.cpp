#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int n;
    cout<<"Enter the size of Array:";
    cin>>n;
    vector<int>v;
    for(int i = 0;i<n ;i++){
        int x;
        cout<<"Enter v["<<i<<"] ";
        cin>>x;
        v.push_back(x);
    }
    display(v);

    int i = 0;
    int j = v.size()-1;
    while(i<j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
    display(v);





    return 0;
}