#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter the row:";
    cin>>m;
    int n;
    cout<<"Enter the col:";
    cin>>n;

    int arr1[m][n];
    int arr2[m][n];
    int sum[m][n] = {0};
    cout<<"Enter the elements of First array:"<<endl;
    for(int i = 0;i<m ;i++){
        for(int j = 0 ;j<n ;j++){
            cout<<"Enter "<<"arr["<<i<<"]["<<j<<"]"<<" element: ";
            cin>>arr1[i][j];
        }
    }

    cout<<"\nEnter the elements of second array:"<<endl;
    for(int i = 0;i<m ;i++){
        for(int j = 0 ;j<n ;j++){
            cout<<"Enter "<<"arr["<<i<<"]["<<j<<"]"<<" element: ";
            cin>>arr2[i][j];
        }
    }

    for(int i = 0;i<m ;i++){
        for(int j = 0;j<n ;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i = 0;i<m ;i++){
        for(int j = 0;j<n ;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    // sum
    cout<<endl;
    for(int i = 0;i<m ;i++){
        for(int j = 0;j<n ;j++){
            sum[i][j] = arr1[i][j]+ arr2[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }


    



  
   
    


    return 0;
}