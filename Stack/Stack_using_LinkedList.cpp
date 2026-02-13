/* class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class myStack {

  public:
  int si=0;
  Node*head=NULL;
    myStack() {
        
    }

    bool isEmpty() {
        if(head==NULL)return true;
        return false;
        
    }

    void push(int x) {
        Node* newnode=new Node(x);
        newnode->next=head;
        head=newnode;
        si++;
    }

    void pop() {
        if(head==NULL)return;
        Node*curr=head;
        head=head->next;
        delete(curr);
        si--;
    }

    int peek() {
        if(head==NULL)return -1;
        return head->data;
    }

    int size() {
        return si;
    }
};
