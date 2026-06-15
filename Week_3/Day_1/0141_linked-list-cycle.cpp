// ============================================================
// 141. Linked List Cycle
// Difficulty : Easy
// Language   : C++
// Runtime    : 12 (beats 43.6%)
// Memory     : 11952000 (beats 22.3%)
// Submitted  : 2025-11-22 17:30:34 UTC
// URL        : https://leetcode.com/problems/linked-list-cycle/
// ============================================================
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
    bool hasCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
            if (slow == fast) {
                return true;
            }
        }
        return false;
    }
};