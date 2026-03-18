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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=l1;
        vector<int>list1;
        while(temp!=NULL){
            list1.push_back(temp->val);
            temp=temp->next;
        }
        temp=l2;
        vector<int>list2;
        while(temp!=NULL){
            list2.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>ans;
        int left=0;
        int right=0;
        int carry=0;
        int i=0;
        while(left<list1.size()||right<list2.size()||carry){    
            int sum=carry;
            if(left<list1.size())sum+=list1[left++];
            if(right<list2.size())sum+=list2[right++];
                ans.push_back(sum%10);
                carry=sum/10;
        }
        ListNode* newnode=new ListNode(0);
        ListNode* curr=newnode;

        for(auto i:ans){
            curr->next=new ListNode(i);
            curr=curr->next;
        }
        return newnode->next;
    }
};