// ============================================================
// 103. Binary Tree Zigzag Level Order Traversal
// Difficulty : Medium
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 15156000 (beats 47.6%)
// Submitted  : 2026-06-23 18:23:13 UTC
// URL        : https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
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
        for (int i = 0; i < output.size(); i++) {
            if (i % 2 != 0) {
                reverse(output[i].begin(), output[i].end());
            }
        }
        return output;
    }
};