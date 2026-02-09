/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        int count=1;
        if(head==NULL)return head;
        if(x==1){
            Node*curr=head;
            head=head->next;
            delete(curr);
            return head;
        }
        Node*curr=head;
        Node*prev=NULL;
        while(count<x){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        delete(curr);
        return head;
    }
};
