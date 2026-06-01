// ============================================================
// 1. Two Sum
// Difficulty : Easy
// Language   : C++
// Runtime    : 2 (beats 71.6%)
// Memory     : 14836000 (beats 37.1%)
// Submitted  : 2026-05-31 17:16:09 UTC
// URL        : https://leetcode.com/problems/two-sum/
// ============================================================
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hm;
        for (int i = 0; i < nums.size(); i++) {
            int find = target - nums[i];
            if (hm.find(find) != hm.end()) {
                return {i, hm[find]};
            } else {
                hm[nums[i]] = i;
            }
        }
        return {};
    }
};