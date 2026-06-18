// ============================================================
// 739. Daily Temperatures
// Difficulty : Medium
// Language   : C++
// Runtime    : 43 (beats 5.3%)
// Memory     : 108340000 (beats 10.2%)
// Submitted  : 2025-11-04 16:54:06 UTC
// URL        : https://leetcode.com/problems/daily-temperatures/
// ============================================================
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        int n = temps.size();
        stack<pair<int, int>> stack;
        vector<int> result;
        for (int i = temps.size() - 1; i >= 0; i--) {
            if (stack.empty()) {
                result.push_back(0);
            } else if (stack.top().first > temps[i]) {
                result.push_back((stack.top().second - i));
            } else if (!stack.empty() && stack.top().first <= temps[i]) {
                while (!stack.empty() && stack.top().first <= temps[i]) {
                    stack.pop();
                    if (stack.empty()) {
                        result.push_back(0);
                    } else if (stack.top().first > temps[i]) {
                        result.push_back((stack.top().second - i));
                    }
                }
            }
            stack.push({temps[i], i});
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
