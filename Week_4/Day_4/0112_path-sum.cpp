// ============================================================
// 112. Path Sum
// Difficulty : Easy
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 21532000 (beats 35.5%)
// Submitted  : 2026-06-25 18:42:26 UTC
// URL        : https://leetcode.com/problems/path-sum/
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
private:
    bool pathsum(TreeNode* root, int targetsum, int sum) {
        if (!root) {
            return false;
        }
        if (root->left == nullptr && root->right == nullptr) {
            if (sum + root->val == targetsum) {
                return true;
            } else
                return false;
        }
        sum += root->val;
        return (pathsum(root->left, targetsum, sum) ||
                pathsum(root->right, targetsum, sum));
    }

public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (pathsum(root, targetSum, 0))
            return true;
        else
            return false;
    }
};