// ============================================================
// 98. Validate Binary Search Tree
// Difficulty : Medium
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 21660000 (beats 99.9%)
// Submitted  : 2026-02-06 18:36:13 UTC
// URL        : https://leetcode.com/problems/validate-binary-search-tree/
// ============================================================
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    TreeNode* prev = nullptr;
private:
    bool validbst(TreeNode* root){
        if(!root){
            return true;
        }
        if(!validbst(root->left)){
            return false;
        }
        if(prev && prev->val >= root->val){
            return false;
        }
        prev = root;
        if(!validbst(root->right)){
            return false;
        }
        return true;
    }

public:
    bool isValidBST(TreeNode* root) {
        return validbst(root);
    }
};