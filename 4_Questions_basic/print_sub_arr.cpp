#include<iostream>
using namespace std;
int main(){

    int arr[6] = {1,2,3,4,5,6};

    for(int start = 0 ;start<6;start++){
        for(int end = start ; end<6 ;end++){
           for(int i = start ; i<end;i++){
            cout<<arr[i];
           }
           cout<<" ";
        }
        cout<<endl;
    }



    return 0;

}