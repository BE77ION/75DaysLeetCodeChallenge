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
        ListNode* f=head;
        while(f){
            n--;
            if(n==-1)break;
            f=f->next;
        }
        if(f==NULL){
            ListNode* newhead=head->next;
            delete head;
            return newhead;
        }
         ListNode* slow=head;
         while(f->next){
            f=f->next;
            slow=slow->next;
         }
        ListNode* deleteNode=slow->next;
        slow->next=slow->next->next;
        delete deleteNode;
        return head;
    }
};