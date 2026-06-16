#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    
    v.push_back(6);
    v.push_back(10);
    
    v.push_back(6);
    v.push_back(6);

    v.push_back(12);
    v.push_back(13);
    v.push_back(6);
     v.push_back(12);

    int idx = -1;
    int key = 12;
    for(int i = 0;i<v.size() ;i++){
        if(v[i] == key){
            idx = i;
        }
    }
    cout<<idx;

    int idx1 = -1; 

    cout<<endl;
    for(int i = v.size()-1 ;i>=0 ;i--){
        if(v[i] == key){
            idx1 = i;
            break;
        }
    }


    cout<<idx1;




    


    return 0;
}
