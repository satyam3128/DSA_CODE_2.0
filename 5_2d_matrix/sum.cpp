#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row:";
    cin>>m;
    int n;
    cout<<"Enter the col:";
    cin>>n;

    int arr[100][100];
    cout<<"Enter the elements:"<<endl;
    for(int i = 0;i<m ;i++){
        for(int j = 0 ;j<n ;j++){
            cout<<"Enter "<<"arr["<<i<<"]["<<j<<"]"<<" element: ";
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    int sum = 0;
    for(int i = 0;i<m ;i++){
        for(int j = 0;j<n ;j++){
            cout<<arr[i][j]<<" ";
            sum += arr[i][j];
        }

        cout<<endl;
    }

    cout<<endl<<"Sum of elements is : "<<sum;
    


    return 0;
}