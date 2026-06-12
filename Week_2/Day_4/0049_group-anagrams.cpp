// ============================================================
// 49. Group Anagrams
// Difficulty : Medium
// Language   : C++
// Runtime    : 13 (beats 77.9%)
// Memory     : 24836000 (beats 87.4%)
// Submitted  : 2026-06-12 18:28:21 UTC
// URL        : https://leetcode.com/problems/group-anagrams/
// ============================================================
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for (const auto& s : strs) {
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());
            res[sortedS].push_back(s);
        }
        vector<vector<string>> result;
        for (auto& pair : res) {
            result.push_back(pair.second);
        }
        return result;
    }
};