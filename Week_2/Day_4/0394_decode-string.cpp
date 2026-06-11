// ============================================================
// 394. Decode String
// Difficulty : Medium
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 9648000 (beats 16.9%)
// Submitted  : 2026-06-11 18:29:51 UTC
// URL        : https://leetcode.com/problems/decode-string/
// ============================================================
class Solution {
public:
    string decodeString(string s) {
        string curr = "";
        stack<pair<string, int>> st;
        int num = 0;

        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            }
            else if (isalpha(c)) {
                curr += c;
            }
            else if (c == '[') {
                st.push({curr, num});
                curr = "";
                num = 0;
            }
            else if (c == ']') {
                auto [prev, cnt] = st.top();
                st.pop();

                string temp = "";
                for (int i = 0; i < cnt; i++) {
                    temp += curr;
                }

                curr = prev + temp;
            }
        }

        return curr;
    }
};