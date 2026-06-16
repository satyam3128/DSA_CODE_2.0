#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void sort_0_1(vector<int>&v){
    int start = 0;
    int end = v.size()-1;
    while(start<end){
        
        if(v[start]== 1 && v[end]==0){
            swap(v[start],v[end]);
            start++;
            end--;
        }
        else{
            if(v[start] == 0){
            start++;
        }
        if(v[end] == 1){
            end--;
        }
        }
    }
}

int main(){

    int n ;
    cout<<"Enter the size:";
    cin>>n;
    vector<int>v;
    for(int i  = 0;i<n;i++){
        cout<<"Enter 0 or 1 :";
        int x;
        cin>>x;
        v.push_back(x);
    }

    display(v);
    sort_0_1(v);
    display(v);

    



    return 0;
}