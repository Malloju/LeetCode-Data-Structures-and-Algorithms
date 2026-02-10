/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*curr=head;
        int len=0;
        while(curr!=NULL){
            curr=curr->next;
            len++;
        }
        if(len==n){
            curr=head;
            return head->next;
            delete curr;
        }
        curr=head;
        ListNode*prev=NULL;
        for(int i=0;i<len-n;i++){    //Ex: len=5 n=3 5-2=3 curr stand at node and prev just befort it and we will make a bridge from prev->currnext 
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        return head;
    }
};
