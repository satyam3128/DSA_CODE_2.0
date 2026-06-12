#include<iostream>
using namespace std;
int main(){

    int arr[100];
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    for(int i = 0;i<n ;i++){
        cout<<"Enter "<<"arr["<<i<<"] :";
        cin>>arr[i];
    }
    int count = 0;

    for(int i = 0;i<n;i++){
      cout<<arr[i]<<" ";
      if(arr[i]%2 ==0){
        count++;
      }


    }


    // Even Number sorting

    int even[count];
    int j = 0;
    for(int i = 0;i<n ;i++){
        if(arr[i] %2 ==0){
            even[j] = arr[i];
            j++;
        }
    }

    



    // Selction sort
    for(int i = 0 ;i<count-1 ;i++){
        int index = i;
        for(int j = i+1;j<count;j++){
            if(even[j]<even[index]){
                index = j;
            }
        }
        swap(even[i],even[index]);
    }

    // assign 
    int k = 0;
    for(int i = 0;i< n ;i++){
        if(arr[i]%2 ==0){
            arr[i] = even[k];
            k++;
        }
    }

    cout<<endl<<"Even Number"<<endl;
    for(int i = 0;i<n ;i++){
        cout<<"|"<<arr[i]<<"| ";
    }

    
    return 0;
}