// ============================================================
// 234. Palindrome Linked List
// Difficulty : Easy
// Language   : C++
// Runtime    : 8 (beats 23.0%)
// Memory     : 117860000 (beats 93.4%)
// Submitted  : 2025-11-27 15:18:29 UTC
// URL        : https://leetcode.com/problems/palindrome-linked-list/
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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* curr = slow;
        ListNode* prev = nullptr;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        ListNode* left = head;
        ListNode* right = prev;
        while (right) {
            if (right->val == left->val) {
                right = right->next;
                left = left->next;
            } else {
                return false;
            }
        }
        return true;
    }
};
