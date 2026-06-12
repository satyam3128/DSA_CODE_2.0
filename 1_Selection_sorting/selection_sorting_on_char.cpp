#include <iostream>
using namespace std;
int main(){
    char arr[100];
    int n ;
    cout<<"Enter the size:";
    cin>>n;
    cout<<"Enter the character"<<endl<<"---------------";
    
    for(int i = 0;i<n ;i++){
        cout<<endl<<"Enter "<<"arr["<<i<<"] :";
        cin>>arr[i];
    }
    cout<<endl<<"Array[]:-"<<endl<<"---------------"<<endl;
    for(int i = 0;i<n ;i++){
        cout<<"|"<<arr[i]<<"| ";
    }
     cout<<endl<<"Sorted Array[]:-"<<endl<<"---------------"<<endl;
    //selection sorting 
    for(int i = 0 ;i<n-1 ;i++){
        int index = i;
        for(int j = i+1 ;j<n;j++){
            if(arr[j]<arr[index]){
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }

    for(int i = 0;i<n ;i++){
        cout<<"|"<<arr[i]<<"| ";
    }


    return 0 ;
}