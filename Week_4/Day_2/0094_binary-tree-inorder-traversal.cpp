// ============================================================
// 94. Binary Tree Inorder Traversal
// Difficulty : Easy
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 10864000 (beats 65.8%)
// Submitted  : 2025-12-21 16:12:41 UTC
// URL        : https://leetcode.com/problems/binary-tree-inorder-traversal/
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
    vector<int> output;

private:
    void inOrder(TreeNode* root) {
        if (!root)
            return;
        inOrder(root->left);
        output.push_back(root->val);
        inOrder(root->right);
    }

public:
    vector<int> inorderTraversal(TreeNode* root) {
        inOrder(root);
        return output;
    }
};