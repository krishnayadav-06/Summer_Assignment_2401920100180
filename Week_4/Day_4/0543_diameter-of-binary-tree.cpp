// ============================================================
// 543. Diameter of Binary Tree
// Difficulty : Easy
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 23788000 (beats 41.7%)
// Submitted  : 2025-12-23 10:22:33 UTC
// URL        : https://leetcode.com/problems/diameter-of-binary-tree/
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
int diameter = 0;

private:
    int meter(TreeNode* root) {
        if (!root)
            return 0;
        int lHeight = meter(root->left);
        int rHeight = meter(root->right);
        diameter = max(diameter, lHeight + rHeight);
        return 1 + max(rHeight, lHeight);
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        meter(root);
        return diameter;
    }
};