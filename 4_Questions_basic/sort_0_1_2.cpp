#include<iostream>
using namespace std;
int main(){

    int arr[] = {1,2,1,2,1,2,0,0};

    int n = 8;
    int start = 0;
    int mid =  0;
    int end = n-1;

    while(mid<=end){
        if(arr[mid] == 2){
            swap(arr[mid],arr[end]);
            end--;
        }
        else if(arr[mid] == 0){
            swap(arr[start],arr[mid]);
            mid++;
            start++;
        }
        else{
            mid++;
        }

    }

    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }



    return 0;


    

}