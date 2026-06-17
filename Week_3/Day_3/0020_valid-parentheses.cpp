// ============================================================
// 20. Valid Parentheses
// Difficulty : Easy
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 9012000 (beats 18.8%)
// Submitted  : 2025-11-01 15:43:53 UTC
// URL        : https://leetcode.com/problems/valid-parentheses/
// ============================================================
class Solution {
public:
    bool isValid(string s) {
        stack <char> bracket;
        unordered_map <char,char> hm;
        hm ={{')','('},{'}','{'},{']','['}} ;
        for( auto b : s){
            if (hm.find(b)==hm.end()){
                bracket.push(b);
            }
            else if(!bracket.empty() && hm[b]==bracket.top()){
                bracket.pop();
            }
            else{
                return false;
            }
        }
        return bracket.empty();
        
    }
};
