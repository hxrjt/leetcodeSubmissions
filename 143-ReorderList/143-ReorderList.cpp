// Last updated: 12/2/2025, 5:52:27 PM
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
    ListNode* reverse(ListNode* &head){
        ListNode* pre=NULL;
        ListNode* nxt=NULL;
        ListNode* cur=head;
        while(cur!=NULL){
            nxt=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nxt;
        }
        return pre;
    }
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next){
            return ;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL){
            if(fast->next==NULL){
                fast=fast->next;
            }
            else{
                fast=fast->next->next;
                slow=slow->next;
            }
        }
        fast=slow->next;
        slow->next=NULL;
        slow=head;
        ListNode* newHead=reverse(fast);
        ListNode* currHead=slow;
        while(newHead){
            ListNode* currNxt=currHead->next;
            ListNode* newNxt=newHead->next;
            currHead->next=newHead;
            newHead->next=currNxt;
            currHead=currNxt;
            newHead=newNxt;
        }
    }
};