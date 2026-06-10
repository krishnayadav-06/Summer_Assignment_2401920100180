// ============================================================
// 459. Repeated Substring Pattern
// Difficulty : Easy
// Language   : C++
// Runtime    : 7 (beats 59.9%)
// Memory     : 13428000 (beats 92.5%)
// Submitted  : 2026-06-10 18:09:06 UTC
// URL        : https://leetcode.com/problems/repeated-substring-pattern/
// ============================================================
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s + s;
        size_t findidx = doubled.find(s, 1);
        if (findidx < s.size())
            return true;
        return false;
    }
};