// ============================================================
// 496. Next Greater Element I
// Difficulty : Easy
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 12876000 (beats 37.9%)
// Submitted  : 2025-11-02 14:13:44 UTC
// URL        : https://leetcode.com/problems/next-greater-element-i/
// ============================================================
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector<int> ans(n);
        stack<int> s;
        unordered_map<int, int> hm;
        for (int i = nums2.size() - 1; i >= 0; i--) {
            if (s.empty()) {
                hm[nums2[i]] = -1;
            } else if (s.top() > nums2[i]) {
                hm[nums2[i]] = s.top();
            } else if (s.empty() != true && s.top() <= nums2[i]) {
                while (s.empty() != true && s.top() <= nums2[i]) {
                    s.pop();
                    if (s.empty()) {
                        hm[nums2[i]] = -1;
                    }
                    else if (s.top() > nums2[i]) {
                        hm[nums2[i]] = s.top();
                }
            }
        }
        s.push(nums2[i]);
        }
        for (int i = 0; i < n; i++) {
            if (hm.find(nums1[i]) != hm.end()) {
                ans[i]=hm[nums1[i]];
            }
        }
        return ans;
    }
};