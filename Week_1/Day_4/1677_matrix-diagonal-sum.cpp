// ============================================================
// 1677. Matrix Diagonal Sum
// Difficulty : Easy
// Language   : C++
// Runtime    : N/A (beats 100.0%)
// Memory     : 15084000 (beats 16.5%)
// Submitted  : 2026-06-04 15:33:21 UTC
// URL        : https://leetcode.com/problems/matrix-diagonal-sum/
// ============================================================
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += mat[i][i];
            sum += mat[i][n - i - 1];
        }
        if (n % 2 != 0)
            sum -= mat[(n - 1) / 2][(n - 1) / 2];
        return sum;
    }
};