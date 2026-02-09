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
int main() {
    node*head=NULL;
    node*curr=NULL;
    node*a=new node(1);
    head=a;
    curr=a;
    node*b=new node(2);
    a->next=b;
    node*c=new node(3);
    b->next=c;
    
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return 0;
}
