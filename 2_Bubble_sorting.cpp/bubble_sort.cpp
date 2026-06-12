#include<iostream>
using namespace std;
int main(){

    int arr[100];
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    for(int i = 0;i<n ;i++){
        cout<<"Enter "<<" arr["<<i<<"]: ";
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Array[]:-"<<endl;
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(int i = 0 ;i<n-1 ;i++){
        int swapcount = 0;

        for(int j = 0;j<n-i-1 ;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapcount++;

            }
            

        }

        cout<<endl<<"Round"<<i+1<<": ";
            for(int i = 0 ;i<n;i++){
            cout<<arr[i]<<" ";
    }
        if(swapcount == 0){
            break;
        }
        
    }

    cout<<endl<<"Sorted Array:"<<endl;
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;

}