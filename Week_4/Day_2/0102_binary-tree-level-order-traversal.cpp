// ============================================================
// 102. Binary Tree Level Order Traversal
// Difficulty : Medium
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 16964000 (beats 90.0%)
// Submitted  : 2026-01-28 14:40:26 UTC
// URL        : https://leetcode.com/problems/binary-tree-level-order-traversal/
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> output;
        vector<int> l_res;
        queue<TreeNode*> que;
        if (root) {
            que.push(root);
        }
        while (que.size() > 0) {
            int length = que.size();
            for (int i = 0; i < length; i++) {
                TreeNode* curr = que.front();
                que.pop();
                l_res.push_back(curr->val);
                if (curr->left) {
                    que.push(curr->left);
                }
                if (curr->right) {
                    que.push(curr->right);
                }
            }
            output.push_back(l_res);
            l_res.clear();
        }
        return output;
    }
};