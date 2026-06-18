// ============================================================
// 150. Evaluate Reverse Polish Notation
// Difficulty : Medium
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 17144000 (beats 40.5%)
// Submitted  : 2025-11-01 12:54:40 UTC
// URL        : https://leetcode.com/problems/evaluate-reverse-polish-notation/
// ============================================================
class Solution {
public:
    int evalRPN(vector<string>& token) {
        stack<int> res_stack;
        for (int i = 0; i < token.size(); i++) {
            if (token[i] != "+" && token[i] != "-" && token[i] != "*" && token[i] != "/") {
                res_stack.push(stoi(token[i]));
            } else {
                int b = res_stack.top();
                res_stack.pop();
                int a = res_stack.top();
                res_stack.pop();
                if (token[i] == "+") {
                    res_stack.push(a + b);
                } else if (token[i] == "-") {
                    res_stack.push(a - b);
                } else if (token[i] == "*") {
                    res_stack.push(a * b);
                } else {
                    res_stack.push(a / b);
                }
            }
        }
        return res_stack.top();
    }
};
