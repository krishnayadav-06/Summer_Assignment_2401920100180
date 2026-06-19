// ============================================================
// 239. Sliding Window Maximum
// Difficulty : Hard
// Language   : C++
// Runtime    : 34 (beats 26.1%)
// Memory     : 134468000 (beats 97.8%)
// Submitted  : 2026-06-19 18:29:20 UTC
// URL        : https://leetcode.com/problems/sliding-window-maximum/
// ============================================================
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> output(n - k + 1);
        deque<int> q;
        int l = 0, r = 0;

        while (r < n) {
            while (!q.empty() && nums[q.back()] < nums[r]) {
                q.pop_back();
            }
            q.push_back(r);

            if (l > q.front()) {
                q.pop_front();
            }

            if ((r + 1) >= k) {
                output[l] = nums[q.front()];
                l++;
            }
            r++;
        }

        return output;
    }
};