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
        ListNode* p=head;
        ListNode*q=head;
        int c=0;
        while(p!=NULL){
            c++;
            p=p->next;
        }
        if(c==1 and n==1) return NULL;
        c-=n;
        if(c==0) return head->next;
        cout<<c;
        while(c>1){
            q=q->next;
            c--;
        }
        ListNode* r;
        if(q->next!=NULL){
        r=q->next->next;
        q->next=r;
        }
        else
        q->next=NULL;
        return head;
    }
};