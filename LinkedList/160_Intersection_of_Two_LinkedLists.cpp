/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n1=0;
        int n2=0;
        ListNode*curr1=headA;
        ListNode*curr2=headB;
        while(curr1!=NULL){
            curr1=curr1->next;
            n1++;
        }
        while(curr2!=NULL){
            curr2=curr2->next;
            n2++;
        }
        int dif=abs(n1-n2);
        if(n1>n2){                                  //to avoid writing loops twice inn if else we fixed that curr1 is greatest and wrote for loop according to that and assigning longest heat to curr1
            curr1=headA;
            curr2=headB;
        }else{
            curr1=headB;
            curr2=headA;
        }
        for(int i=0;i<dif;i++){
            curr1=curr1->next;
        }
        while(curr1!=NULL && curr2!=NULL){
            if(curr1==curr2){
                return curr1;
            }
            curr1=curr1->next;
            curr2=curr2->next;
        }
        return NULL;
    }
};
