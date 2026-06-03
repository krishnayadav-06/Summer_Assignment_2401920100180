// ============================================================
// 1019. Squares of a Sorted Array
// Difficulty : Easy
// Language   : C++
// Runtime    : 1 (beats 57.2%)
// Memory     : 30324000 (beats 39.3%)
// Submitted  : 2025-11-17 14:34:14 UTC
// URL        : https://leetcode.com/problems/squares-of-a-sorted-array/
// ============================================================
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int i = 0;
        int j = nums.size() - 1;
        int k = nums.size() - 1;
        while (i <= j) {
            if (abs(nums[i]) >= abs(nums[j])) {
                ans[k] = (pow(nums[i], 2));
                k--;
                i++;
            } else {
                ans[k] = (pow(nums[j], 2));
                k--;
                j--;
            }
        }
        return ans;
    }
};