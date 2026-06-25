// ============================================================
// 124. Binary Tree Maximum Path Sum
// Difficulty : Hard
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 27836000 (beats 73.9%)
// Submitted  : 2026-06-25 19:03:05 UTC
// URL        : https://leetcode.com/problems/binary-tree-maximum-path-sum/
// ============================================================
class Solution {
    int maxSum = INT_MIN;
private:
    int gain(TreeNode* node) {
        if (!node)
            return 0;

        int leftGain = max(0, gain(node->left));
        int rightGain = max(0, gain(node->right));

        maxSum = max(maxSum, leftGain + rightGain + node->val);

        return node->val + max(leftGain, rightGain);
    }

public:
    int maxPathSum(TreeNode* root) {
        gain(root);
        return maxSum;
    }
};