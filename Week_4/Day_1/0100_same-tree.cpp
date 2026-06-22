// ============================================================
// 100. Same Tree
// Difficulty : Easy
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 12848000 (beats 47.1%)
// Submitted  : 2025-12-24 09:45:23 UTC
// URL        : https://leetcode.com/problems/same-tree/
// ============================================================
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q)
            return true;
        if ((!p && q) || (p && !q))
            return false;
        return(isSameTree(p->left, q->left) && isSameTree(p->right, q->right) && (p->val == q->val));
    }
};
// isSameTree(p->left,q->left);
// isSameTree(p->right,q->right);
// return (p->val == q->val);
// not this