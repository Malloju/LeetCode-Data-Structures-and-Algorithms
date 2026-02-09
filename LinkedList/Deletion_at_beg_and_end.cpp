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
void deletionAtStart(node*&head){
    node*curr=head;
    head=head->next;
    delete(curr);
}
void deletionAtEnd(node*&head){
    node*current=head;
    while(current->next->next!=NULL){
        current=current->next;
    }
    current->next=NULL;
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
    node*curr=NULL;
    node*a=new node(1);
    head=a;
    node*b=new node(2);
    a->next=b;
    node*c=new node(3);
    b->next=c;
    cout<<"Before Deletion: "<<endl;
    print(head);
    deletionAtStart(head);
    cout<<"After Deletion at start: "<<endl;
    print(head);
    deletionAtEnd(head);
    cout<<"After Deletion at End: "<<endl;
    print(head);
    return 0;
}
