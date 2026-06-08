// ============================================================
// 383. Ransom Note
// Difficulty : Easy
// Language   : C++
// Runtime    : 3 (beats 53.9%)
// Memory     : 11988000 (beats 27.9%)
// Submitted  : 2026-06-08 17:58:10 UTC
// URL        : https://leetcode.com/problems/ransom-note/
// ============================================================
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> hm;
        for (char ch : magazine) {
            hm[ch]++;
        }
        for (char ch : ransomNote) {
            if (hm.find(ch) == hm.end() || hm[ch] == 0)
                return false;
            hm[ch]--;
        }
        return true;
    }
};