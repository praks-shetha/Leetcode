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
    ListNode *detectCycle(ListNode *head) {
        /*unordered_set<ListNode*>s;
        while(head)
        {
            if(s.count(head)==1)return head;
            s.insert(head);
            head=head->next;
        }
        return NULL;*/
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast)
        {
            fast=fast->next;
            if(fast)
            {
                fast=fast->next;
                slow=slow->next;
            }
            if(fast==slow)break;

        }
        if(fast==nullptr)return nullptr;
        slow=head;
        while(fast!=slow)
        {
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
    }
};