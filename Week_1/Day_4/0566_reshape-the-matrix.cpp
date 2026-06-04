// ============================================================
// 566. Reshape the Matrix
// Difficulty : Easy
// Language   : C++
// Runtime    : N/A (beats 100.0%)
// Memory     : 15044000 (beats 82.0%)
// Submitted  : 2026-06-04 18:28:09 UTC
// URL        : https://leetcode.com/problems/reshape-the-matrix/
// ============================================================
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = size(mat);
        int n = size(mat[0]);
        int total = m * n;
        if (r * c != total)
            return mat;
        vector<vector<int>> ans(r, vector<int>(c));
        for (int i = 0; i < total; i++) {
            ans[i / c][i % c] = mat[i / n][i % n];
        }

        return ans;
    }
};