// ============================================================
// 438. Find All Anagrams in a String
// Difficulty : Medium
// Language   : C++
// Runtime    : 4 (beats 68.0%)
// Memory     : 11424000 (beats 84.7%)
// Submitted  : 2026-06-09 18:28:23 UTC
// URL        : https://leetcode.com/problems/find-all-anagrams-in-a-string/
// ============================================================
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = p.size();
        int m = s.size();

        if (n > m) return ans;

        vector<int> need(26, 0);
        vector<int> window(26, 0);

        for (char c : p) {
            need[c - 'a']++;
        }

        int l = 0;

        for (int r = 0; r < m; r++) {
            window[s[r] - 'a']++;

            if (r - l + 1 > n) {
                window[s[l] - 'a']--;
                l++;
            }

            if (r - l + 1 == n && window == need) {
                ans.push_back(l);
            }
        }

        return ans;
    }
};