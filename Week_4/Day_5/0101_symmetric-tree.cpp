// ============================================================
// 101. Symmetric Tree
// Difficulty : Easy
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 18300000 (beats 85.68%)
// Submitted  : 2026-04-10 15:37:00 UTC
// URL        : https://leetcode.com/problems/symmetric-tree/
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
class Solution
{
private:
    void invert(TreeNode *root)
    {
        if (!root)
            return;
        swap(root->left, root->right);
        invert(root->left);
        invert(root->right);
    }
    bool isSame(TreeNode *p, TreeNode *q)
    {
        if (!p && !q)
            return true;
        if ((!p && q) || (p && !q))
            return false;
        return (isSame(p->left, q->left) && isSame(p->right, q->right) && p->val == q->val);
    }

public:
    bool isSymmetric(TreeNode *root)
    {
        invert(root->right);
        return isSame(root->left, root->right);
    }
};