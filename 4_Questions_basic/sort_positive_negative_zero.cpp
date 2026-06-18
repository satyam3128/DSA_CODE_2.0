#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    cout<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"------------------------------------"<<endl;
    cout<<endl;
}
void segregate_pos_neg_zero(vector<int>&v){
    int start = 0;
    int mid = 0 ;
    int end = v.size()-1;

    while(mid<=end){
        if(v[mid]>0){
            swap(v[mid],v[end]);
            end--;

        }
        else if(v[mid]<0){
            swap(v[mid],v[start]);
            start++;
            mid++;
        }
        else{
            mid++;
        }
    }
}
int main(){
    vector<int>v;
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    cout<<"Enter Numbers: \n";

    for(int i = 0;i<n ;i++){
        cout<<"Enter v["<<i<<"] :";
        int x;
        cin>>x;
        v.push_back(x);
    }

    display(v);
    segregate_pos_neg_zero(v);
    display(v);


    

    





    return 0 ;
}