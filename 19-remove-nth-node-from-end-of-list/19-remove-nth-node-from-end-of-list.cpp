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
        ListNode* fast = head, *slow = head, *pre = NULL;
        while(n--) 
            fast = fast->next;
        while(fast) {
            fast=fast->next;
            pre = slow;
            slow=slow->next;
        }
        if(!pre) return head ? head->next : head;
        pre->next = slow->next;
        return head;
    }
};