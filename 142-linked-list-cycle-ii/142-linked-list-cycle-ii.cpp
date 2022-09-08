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
    ListNode *detectCycle(ListNode *head) {
        
     ListNode * temp=head, *slow = head, * fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            while(slow!=temp){
                slow=slow->next;
                temp=temp->next;
            }
            return temp;
        }
    }
    return NULL;
    }
};