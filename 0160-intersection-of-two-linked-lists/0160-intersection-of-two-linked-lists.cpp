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
        ListNode*temp=headA;
        int n=0;
        while(temp){
            n++;
            temp=temp->next;
        }
        temp=headB;
        int m=0;
        while(temp){
            m++;
            temp=temp->next;
        }
        if(n>m){
            return collision(headB,headA,n-m);
        }else{
            return collision(headA,headB,m-n);
        }
        return NULL;
    }
    ListNode* collision(ListNode* t1,ListNode* t2,int d){
        while(d){
            d--;
            t2=t2->next;
        }
        while(t2!=t1&&t1!=NULL&&t2!=NULL){
            t1=t1->next;
            t2=t2->next;
        }
        return t1;
    }
};