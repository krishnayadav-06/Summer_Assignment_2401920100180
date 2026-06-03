// ============================================================
// 283. Move Zeroes
// Difficulty : Easy
// Language   : C++
// Runtime    : N/A (beats 100.0%)
// Memory     : 23892000 (beats 54.8%)
// Submitted  : 2025-11-18 17:58:48 UTC
// URL        : https://leetcode.com/problems/move-zeroes/
// ============================================================
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                continue;
            else {
                nums[k] = nums[i];
                k++;
            }
        }
        for (int i = k; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};