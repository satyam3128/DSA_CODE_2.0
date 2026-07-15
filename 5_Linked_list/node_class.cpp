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
void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next ;

    }
    cout<<endl;
}
int size(node *head){
    node* temp = head;
    int count = 0;
    while(temp != NULL){
        temp = temp->next ;
        count++;
    }
    return count;
}
int main(){
    node* a = new node(10);
    node* b = new node(39);
    node* c = new node(30);
    node* d = new node(390);
    node* e = new node(38);
    node* f = new node(8);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    node *temp = a;
    display(temp);

    cout<<size(temp);

    return 0;
}