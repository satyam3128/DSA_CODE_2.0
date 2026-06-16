#include<iostream>
#include<vector>
using namespace std;

void reverse_part(vector<int>&v,int start , int end){
    while(start<end){
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;

        start++;
        end--;
    }

}
void display(vector<int>&a){
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int n ;
    cout<<"Enter the size:";
    cin>>n ;
    vector<int>v;
    for(int i = 0;i< n ;i++){
        int x;
        cout<<"Enter:";
        cin>>x;
        v.push_back(x);
    }

    display(v);
    int start , end;

    cout<<"\nEnter the starting index and ending index:";
    cin>>start>>end;
    reverse_part(v,start,end);
    display(v);




    return 0;
}