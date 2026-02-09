#include <iostream>
using namespace std;
class node{
        public:
        int data;
        node*next;
        node(int data){
            this->data=data;
            this->next=NULL;
        }
    };
void insertAtBeg(node*&head,int val){
    node*newnode=new node(val);
    newnode->next=head;
    head=newnode;
}
void insertAtEnd(node*&head,int val){
    node*current=head;
    node*newnode=new node(val);
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=newnode;
}
int main() {
    node*head=NULL;
    node*curr=NULL;
    node*a=new node(1);
    head=a;
    node*b=new node(2);
    a->next=b;
    node*c=new node(3);
    b->next=c;
    insertAtBeg(head,0);
    insertAtEnd(head,4);
    curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return 0;
}
