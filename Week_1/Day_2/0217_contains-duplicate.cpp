// ============================================================
// 217. Contains Duplicate
// Difficulty : Easy
// Language   : C++
// Runtime    : 47 (beats 68.5%)
// Memory     : 90716000 (beats 62.0%)
// Submitted  : 2025-09-17 14:48:44 UTC
// URL        : https://leetcode.com/problems/contains-duplicate/
// ============================================================
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hm;
        for (int num : nums) {
            if (hm[num] >= 1) {
                return true;
            }
            hm[num]++;
        }
        return false;
    }
};