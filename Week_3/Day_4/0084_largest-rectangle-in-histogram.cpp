// ============================================================
// 84. Largest Rectangle in Histogram
// Difficulty : Hard
// Language   : C++
// Runtime    : 40 (beats 10.9%)
// Memory     : 86544000 (beats 17.5%)
// Submitted  : 2025-11-08 15:30:10 UTC
// URL        : https://leetcode.com/problems/largest-rectangle-in-histogram/
// ============================================================
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int area = 0, max_area = INT_MIN;
        stack<pair<int, int>> stack1;
        stack<pair<int, int>> stack2;
        vector<int> l_res(n);
        vector<int> r_res(n);
        for (int i = n - 1; i >= 0; i--) {
            while (!stack2.empty() && stack2.top().first >= heights[i]) {
                stack2.pop();
            }
            r_res[i] = stack2.empty() ? n : stack2.top().second;
            stack2.push({heights[i], i});
        }
        for (int i = 0; i <= n - 1; i++) {
            while (!stack1.empty() && stack1.top().first >= heights[i]) {
                stack1.pop();
            }
            l_res[i] = stack1.empty() ? -1 : stack1.top().second;
            if (l_res[i] == -1) {
                area = (r_res[i] * heights[i]);
            } else {
                area = (r_res[i] - l_res[i]-1) * heights[i];
            }
            max_area = max(area, max_area);
            stack1.push({heights[i], i});
        }
        return max_area;
    }
};