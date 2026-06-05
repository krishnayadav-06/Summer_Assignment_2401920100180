// ============================================================
// 344. Reverse String
// Difficulty : Easy
// Language   : C++
// Runtime    : N/A (beats 100.0%)
// Memory     : 27348000 (beats 15.0%)
// Submitted  : 2025-10-30 15:08:26 UTC
// URL        : https://leetcode.com/problems/reverse-string/
// ============================================================
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        
    }
};