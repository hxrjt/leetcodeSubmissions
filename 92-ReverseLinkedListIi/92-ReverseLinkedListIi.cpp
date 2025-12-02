// Last updated: 12/2/2025, 5:52:47 PM
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
ListNode* reverse(ListNode* &head,ListNode* &tail,int l,int r){
    ListNode* cur=head;
    ListNode* pre=NULL;
    ListNode* fwd=NULL;
    int count=0;
    while(count!=(r-l+1)){
        fwd=cur->next;
        cur->next=pre;
        pre=cur;
        cur=fwd;
        count++;
    }
    return pre;
}
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL || left==right){
            return head;
        }
        ListNode* h=NULL;
        ListNode* l=head;
        ListNode* r=head;
        for(int i=1;i<left;i++){
            h=l;
            l=l->next;
        }
        for(int i=1;i<right;i++){
            r=r->next;
        }
        ListNode* t=r->next;
        ListNode* reverseHead=reverse(l,r,left,right);
        if(h){
            h->next=reverseHead;
        }
        else{
            head=reverseHead;
        }
        l->next=t;
        return head; 
    }
};