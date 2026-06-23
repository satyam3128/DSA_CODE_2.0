#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;    

    node(int val){
        data = val;
        next = NULL;
    }
};
int main(){

    node a(10);
    node b(20);
    node c(30);
    node d(40);
    
    // cout<<a.data;
    
   
    // linked list form 
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    node* temp = &a;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }




    

    




    return 0;
}