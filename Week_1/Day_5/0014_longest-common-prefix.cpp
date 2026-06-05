// ============================================================
// 14. Longest Common Prefix
// Difficulty : Easy
// Language   : C++
// Runtime    : N/A (beats 100.0%)
// Memory     : 11880000 (beats 59.6%)
// Submitted  : 2026-06-05 17:56:05 UTC
// URL        : https://leetcode.com/problems/longest-common-prefix/
// ============================================================
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            if (strs[i] == "")
                return "";
            bool mismatch = false;
            for (int j = 0; j < strs[i].size() && j < lcp.size(); j++) {
                if (strs[i][j] != lcp[j]) {
                    int sz = lcp.size();
                    for (int k = j; k < sz; k++) {
                        lcp.pop_back();
                    }
                    mismatch = true;
                    break;
                }
            }
            if (!mismatch) {
                int sz = lcp.size();
                for (int k = strs[i].size(); k < sz; k++) {
                    lcp.pop_back();
                }
            }
        }
        return lcp;
    }
};