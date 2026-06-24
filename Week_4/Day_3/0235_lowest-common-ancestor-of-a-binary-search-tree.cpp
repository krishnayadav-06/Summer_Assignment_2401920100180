// ============================================================
// 235. Lowest Common Ancestor of a Binary Search Tree
// Difficulty : Medium
// Language   : C++
// Runtime    : 21 (beats 72.1%)
// Memory     : 23612000 (beats 34.4%)
// Submitted  : 2026-02-03 14:22:08 UTC
// URL        : https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
// ============================================================
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == p || root == q) {
            return root;
        }
        if ((root->val < p->val && root->val > q->val) || (root->val > p->val && root->val < q->val)) {
            return root;
        }
        if (root->val > p->val && root->val > q->val) {
            return lowestCommonAncestor(root->left, p, q);
        }
        if (root->val < p->val && root->val < q->val) {
            return lowestCommonAncestor(root->right, p, q);
        }
        else{
            return nullptr;
        }
    }
};