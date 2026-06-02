// ============================================================
// 643. Maximum Average Subarray I
// Difficulty : Easy
// Language   : C++
// Runtime    : N/A (beats 100.0%)
// Memory     : 113692000 (beats 85.4%)
// Submitted  : 2026-06-02 09:58:35 UTC
// URL        : https://leetcode.com/problems/maximum-average-subarray-i/
// ============================================================
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAverage = INT_MIN;
        int l = 0;
        double sum = 0;
        for (int r = 0; r < nums.size(); r++) {
            sum += nums[r];
            if (r - l + 1 > k) {
                sum -= nums[l];
                l++;
            }
            if (r - l + 1 == k) {
                maxAverage = max(maxAverage, sum / k);
            }
        }
        return maxAverage;
    }
};