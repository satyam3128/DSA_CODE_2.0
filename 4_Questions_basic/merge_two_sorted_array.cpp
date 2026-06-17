#include<iostream>
using namespace std;
int main(){

    int arr1[] = {1,4,5,8};
    int arr2[] = {2,3,6,7,10};

    int n1 = 4;
    int n2 = 5;


    int res[9];
    int i,j,k;
    i = j = k = 0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            res[k] = arr1[i];
            i++;
            k++;
        }
        else{
            res[k] = arr2[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        res[k] = arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        res[k] = arr2[j];
        j++;
        k++;


    }


    for(int i = 0;i<4 ;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<5 ;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<9 ;i++){
        cout<<res[i]<<" ";
    }


    return 0;
}