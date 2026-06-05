// ============================================================
// 125. Valid Palindrome
// Difficulty : Easy
// Language   : C++
// Runtime    : 2 (beats 36.6%)
// Memory     : 9900000 (beats 77.6%)
// Submitted  : 2025-11-19 09:10:11 UTC
// URL        : https://leetcode.com/problems/valid-palindrome/
// ============================================================
class Solution {
public:
    bool isPalindrome(string s) {
        int i =0;
        int j = s.size()-1;
        while(i<j){
            if(!((s[i]>='A'&& s[i]<='Z') || (s[i]>='a'&& s[i]<='z') || (s[i]>='0' && s[i]<= '9'))){
                i++;
                continue;
            }
            if(!((s[j]>='A'&& s[j]<='Z') || (s[j]>='a'&& s[j]<='z') || (s[j]>='0' && s[j]<= '9'))){
                j--;
                continue;
            }
            if(tolower(s[i])==tolower(s[j])){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};