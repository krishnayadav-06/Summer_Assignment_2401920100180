// ============================================================
// 11. Container With Most Water
// Difficulty : Medium
// Language   : C++
// Runtime    : 4 (beats 21.0%)
// Memory     : 62720000 (beats 97.7%)
// Submitted  : 2025-09-26 14:38:32 UTC
// URL        : https://leetcode.com/problems/container-with-most-water/
// ============================================================
class Solution {
public:
    int maxArea(vector<int>& a) {
        int area = 0;
        int i =0;
        int j = a.size()-1;
        while(i<j){
            int width = j-i;
            int height = min(a[i],a[j]);
            area = max(area,width*height);
            if (a[i]<=a[j]){
                i++;
            }
            else
            {
                j--;
            }
        }
        return area;
    }
};