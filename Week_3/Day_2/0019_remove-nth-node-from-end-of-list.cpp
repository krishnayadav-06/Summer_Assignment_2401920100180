// ============================================================
// 19. Remove Nth Node From End of List
// Difficulty : Medium
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 15096000 (beats 24.8%)
// Submitted  : 2025-11-26 15:03:17 UTC
// URL        : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// ============================================================
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
        ListNode* dummy = new ListNode(0, head);
        ListNode* slow = dummy;
        ListNode* fast = head;
        while (n > 0) {
            fast = fast->next;
            n--;
        }
        while (fast) {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return dummy->next; //this works casue when the slow pointer hasn't traversed its equal to head
    }
};