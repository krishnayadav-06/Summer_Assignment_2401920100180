// ============================================================
// 22. Generate Parentheses
// Difficulty : Medium
// Language   : C++
// Runtime    : 3 (beats 70.0%)
// Memory     : 16104000 (beats 20.0%)
// Submitted  : 2026-06-11 18:30:48 UTC
// URL        : https://leetcode.com/problems/generate-parentheses/
// ============================================================
class Solution {
public:
    vector<string> res;

    void backtrack(string curr, int open, int close, int n) {
        if (curr.size() == 2 * n) {
            res.push_back(curr);
            return;
        }

        if (open < n) {
            backtrack(curr + '(', open + 1, close, n);
        }

        if (close < open) {
            backtrack(curr + ')', open, close + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        backtrack("", 0, 0, n);
        return res;
    }
};