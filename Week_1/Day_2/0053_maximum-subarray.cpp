// ============================================================
// 53. Maximum Subarray
// Difficulty : Medium
// Language   : C++
// Runtime    : N/A (beats 100.0%)
// Memory     : 71616000 (beats 80.0%)
// Submitted  : 2025-09-21 03:22:53 UTC
// URL        : https://leetcode.com/problems/maximum-subarray/
// ============================================================
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int max_sum = INT_MIN;
        int currsum;
        currsum = 0;
        for (int i = 0; i < nums.size(); i++) {
            currsum += nums[i];
            max_sum = (currsum > max_sum ? currsum : max_sum);
            if (currsum < 0) {
                currsum = 0;
            }
        }
        return max_sum;
    }
};