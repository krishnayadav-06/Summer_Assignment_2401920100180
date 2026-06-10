// ============================================================
// 392. Is Subsequence
// Difficulty : Easy
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 8600000 (beats 66.4%)
// Submitted  : 2026-06-10 18:15:15 UTC
// URL        : https://leetcode.com/problems/is-subsequence/
// ============================================================
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while (j < t.size() && i < s.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        if (s.size() == i)
            return true;
        return false;
    }
};