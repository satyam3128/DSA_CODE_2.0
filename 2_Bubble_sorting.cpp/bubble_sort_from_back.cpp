#include<iostream>
using namespace std;
int main(){

    int arr[100];
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;

    cout<<"Enter array Elements: "<<endl<<"----------------"<<endl;
    
    for(int i = 0;i<n ;i++){
        cout<<"Enter "<<"Arr["<<i<<"] :";
        cin>>arr[i];
    }
    cout<<"-------------------"<<endl;
    cout<<"Array[] : ";
    for(int i = 0;i<n ;i++){
        cout<<"|"<<arr[i]<<"| ";
    }

    // Buuble sort
    cout<<endl<<"-------------------"<<endl;
    int round = 1;

    for(int i = 1 ;i<n;i++){
        int swap_count = 0 ;
        for(int j = n-1 ;j>= i ;j--){
            if(arr[j]<arr[j-1]){
                swap_count++;
                swap(arr[j],arr[j-1]);
            }
        }
        
        cout<<endl<<"Round "<<round++<<": ";
        for(int i = 0;i< n ;i++){
            cout<<arr[i]<<" ";
        }


        if(swap_count==0){
            break;
        }
    }

    cout<<endl<<"Sorted Array:-"<<endl<<"-------------------"<<endl;
    for(int i = 0;i<n ;i++){
            cout<<arr[i]<<" ";
        }




    return 0;
}