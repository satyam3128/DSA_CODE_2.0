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
    node* a = new node(10);
    node* b = new node(39);
    node* c = new node(30);
    node* d = new node(390);

    a->next = b;
    b->next = c;
    c->next = d;

    node *temp = a;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp  = temp->next;
    }


    return 0;
}