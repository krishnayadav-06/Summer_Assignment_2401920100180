// ============================================================
// 5. Longest Palindromic Substring
// Difficulty : Medium
// Language   : C++
// Runtime    : 1036 (beats 5.0%)
// Memory     : 13640000 (beats 52.6%)
// Submitted  : 2026-06-12 18:31:20 UTC
// URL        : https://leetcode.com/problems/longest-palindromic-substring/
// ============================================================
class Solution {
public:
    string longestPalindrome(string s) {
        string res = "";
        int resLen = 0;

        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {
                int l = i, r = j;
                while (l < r && s[l] == s[r]) {
                    l++;
                    r--;
                }

                if (l >= r && resLen < (j - i + 1)) {
                    res = s.substr(i, j - i + 1);
                    resLen = j - i + 1;
                }
            }
        }

        return res;
    }
};