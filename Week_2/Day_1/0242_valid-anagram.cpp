// ============================================================
// 242. Valid Anagram
// Difficulty : Easy
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 9780000 (beats 48.8%)
// Submitted  : 2025-09-16 13:54:55 UTC
// URL        : https://leetcode.com/problems/valid-anagram/
// ============================================================
#include <map>
class Solution {
public:
    bool isAnagram(string s_str, string t_str) {
        unordered_map<char, int> mp_1, mp_2;
        if (s_str.length() == t_str.length()) {
            for (int i = 0; i < size(s_str); i++) {
                mp_1[s_str[i]]++;
                mp_2[t_str[i]]++;
            }
            return (mp_1 == mp_2);
        }
        return false;
    }
};