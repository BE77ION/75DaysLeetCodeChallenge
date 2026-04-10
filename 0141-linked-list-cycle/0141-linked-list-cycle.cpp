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
    bool hasCycle(ListNode *head) {
        
        unordered_map<ListNode*,int>mp;
        ListNode*t=head;
        while(t){
            if(mp.count(t)){
                return true;
            }
            mp[t]=1;
            t=t->next;
            
        }
        return false;;
    }
};