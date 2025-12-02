// Last updated: 12/2/2025, 5:52:51 PM
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
private:
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode* newHead=new ListNode(-1);
        ListNode* newCurr=newHead;
        map<int,int> mp;
        ListNode* curr=head;
        while(curr!=NULL){
            mp[curr->val]++;
            curr=curr->next;
        }
        for(auto i:mp){
            if(i.second<2){
                ListNode* temp=new ListNode(i.first);
                newCurr->next=temp;
                newCurr=newCurr->next;
            }
        }
        return newHead->next;
    }
};