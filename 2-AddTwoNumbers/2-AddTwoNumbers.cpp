// Last updated: 12/2/2025, 5:53:19 PM
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

ListNode* sum(ListNode* ans,ListNode* num1,ListNode* num2){
    int carry=0;
    int add=0;
    ListNode* temp=new ListNode();
    temp=ans;
    while(num1!=NULL && num2!=NULL){
        add=num1->val+num2->val+carry;
        temp->val=add%10;
        carry=add/10;
        num1=num1->next;
        num2=num2->next;
        if(num1!=NULL || num2!=NULL || carry){
            temp->next=new ListNode();
            temp=temp->next;
        }
    }
    while(num1!=NULL){
        add=num1->val+carry;
        temp->val=add%10;
        carry=add/10;
        num1=num1->next;
        if(num1!=NULL || carry){
            temp->next=new ListNode();
            temp=temp->next;
        }
    }
    while(num2!=NULL){
        add=num2->val+carry;
        temp->val=add%10;
        carry=add/10;
        num2=num2->next;
        if(num2!=NULL || carry){
            temp->next=new ListNode();
            temp=temp->next;
        }
    }
    if(carry){
        temp->val=carry;
    }
    return ans;
}
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode();
        ListNode* ansFinal=sum(ans,l1,l2);
        return ansFinal;
    }
};