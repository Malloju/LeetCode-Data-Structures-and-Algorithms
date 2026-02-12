/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        if(head==NULL|| head->next == NULL)return head;
        Node*nodeprev=NULL;
        Node*curr=head;
        while(curr){
            nodeprev=curr->prev;
            curr->prev=curr->next;
            curr->next=nodeprev;
            curr=curr->prev;
        }
        return nodeprev->prev;
    }
};
