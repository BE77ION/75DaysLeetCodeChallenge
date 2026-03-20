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
    ListNode* rev(ListNode*head){
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* newhead=rev(head->next);
        ListNode*front=head->next;
        front->next=head;
        head->next=NULL;
        return newhead;
    }
    bool isPalindrome(ListNode* head) {
        ListNode*fast=head;
        ListNode*slow=head;
        if(head==NULL||head->next==NULL){
            return head;
        }
        while(fast->next!=NULL&&fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode*newhead=rev(slow->next);
        ListNode*left=head;
        ListNode*right=newhead;
        while(right!=NULL){
            if(left->val!=right->val){
                rev(newhead);
                return false;
            }
            left=left->next;
            right=right->next;
        }
        rev(newhead);
        return true;
    }
};