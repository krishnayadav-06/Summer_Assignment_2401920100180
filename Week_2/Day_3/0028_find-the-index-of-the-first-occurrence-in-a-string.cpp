// ============================================================
// 28. Find the Index of the First Occurrence in a String
// Difficulty : Easy
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 8984000 (beats 91.7%)
// Submitted  : 2026-06-10 17:49:15 UTC
// URL        : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
// ============================================================
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        for (int i = 0; i <= n - m; i++) {
            bool found = true;
            for (int j = 0; j < needle.size(); j++) {
                if (haystack[i + j] != needle[j]) {
                    found = false;
                    break;
                }
            }
            if (found)
                return i;
        }
        return -1;
    }
};