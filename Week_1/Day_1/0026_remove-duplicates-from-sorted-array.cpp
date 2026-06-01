// ============================================================
// 26. Remove Duplicates from Sorted Array
// Difficulty : Easy
// Language   : C++
// Runtime    : N/A (beats 100.0%)
// Memory     : 22684000 (beats 51.2%)
// Submitted  : 2025-10-23 15:30:34 UTC
// URL        : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// ============================================================
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[k - 1]) {
                continue;
            } else {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};