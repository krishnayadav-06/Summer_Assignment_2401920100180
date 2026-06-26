// ============================================================
// 105. Construct Binary Tree from Preorder and Inorder Traversal
// Difficulty : Medium
// Language   : C++
// Runtime    : 2 (beats 78.5%)
// Memory     : 27408000 (beats 54.5%)
// Submitted  : 2026-06-26 19:18:28 UTC
// URL        : https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
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
    int preidx = 0;
    unordered_map<int, int> hm;

private:
    TreeNode* getTree(vector<int>& preorder, int l, int r) {
        if (r < l) {
            return nullptr;
        }
        TreeNode* node = new TreeNode(preorder[preidx++]);
        int piviot = hm[node->val];
        node->left = getTree(preorder, l, piviot - 1);
        node->right = getTree(preorder, piviot + 1, r);
        return node;
    }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++) {
            hm[inorder[i]] = i;
        }
        return getTree(preorder, 0, preorder.size() - 1);
    }
};