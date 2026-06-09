// ============================================================
// 3. Longest Substring Without Repeating Characters
// Difficulty : Medium
// Language   : C++
// Runtime    : 15 (beats 37.9%)
// Memory     : 14372000 (beats 20.5%)
// Submitted  : 2026-06-09 17:38:06 UTC
// URL        : https://leetcode.com/problems/longest-substring-without-repeating-characters/
// ============================================================
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int L = 0;
        int longest = 0;
        for (int R = 0; R < s.size(); R++) {
            while (set.contains(s[R])) {
                set.erase(s[L]);
                L++;
            }
            set.insert(s[R]);
            longest = max(R - L + 1, longest);
        }
        return longest;
    }
};