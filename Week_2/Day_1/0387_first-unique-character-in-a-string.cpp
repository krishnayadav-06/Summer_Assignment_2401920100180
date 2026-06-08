// ============================================================
// 387. First Unique Character in a String
// Difficulty : Easy
// Language   : C++
// Runtime    : 18 (beats 26.8%)
// Memory     : 14976000 (beats 19.8%)
// Submitted  : 2026-06-08 07:51:44 UTC
// URL        : https://leetcode.com/problems/first-unique-character-in-a-string/
// ============================================================
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> hm;
       for (auto ch : s){
            hm[ch]++;
        }
        for (int i = 0; i < s.size(); i++){
            if (hm[s[i]] == 1){
                return i;
            }
        }
        return -1;
        
    }
};