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
    ListNode* rotateRight(ListNode* head, int k) {
    if(head==NULL || head->next==NULL)return head;
    ListNode* prev = NULL;
    ListNode* curr = head;
    int len =0;
    while(curr!=NULL){
        len++;
        prev = curr;
        curr= curr->next;
    }
    prev->next = head;
    int diff = len - (k%len);
    int count =1;
    ListNode* temp = head;
    while(count<diff){
        count++;
        temp= temp->next;
    }
    ListNode* res = temp->next;
    temp->next=NULL;
    
    return res;
    }
};