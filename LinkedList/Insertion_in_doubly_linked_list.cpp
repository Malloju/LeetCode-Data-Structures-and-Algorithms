// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class node{
    public:
    node*prev;
    int data;
    node*next;
    node(int val){
        prev=NULL;
        data=val;
        next=NULL;
    }
};
void insertionatbeg(int n,node*&head,node*&tail){
    node*newnode=new node(n);
    if(head==NULL){
        head=newnode;
        tail=head;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insertionatend(int n,node*&head,node*&tail){
    node*newnode=new node(n);
    newnode->prev=tail;
    tail->next=newnode;
    tail=newnode;
}
void print(node*&head){
    node*curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
int main() {
    node*head=NULL;
    node*tail=NULL;
    while(true){
        cout<<"Enter 1 for insertion at beg"<<endl;
        cout<<"Enter 2 for insertion at end"<<endl;
        cout<<"Enter -1 for printing final list"<<endl;
        int n;
        cin>>n;
       if(n==-1){
           cout<<"The final list is: ";
           print(head);
           break;
       }
       if(n==1){
           cout<<"Enter the number u want to insert at beg:";
           int i;
           cin>>i;
           insertionatbeg(i,head,tail);
           print(head);
       }
       if(n==2){
           cout<<"Enter the number u want to insert at end:";
           int e;
           cin>>e;
           insertionatend(e,head,tail);
           print(head);
       }
    }
    return 0;
}
