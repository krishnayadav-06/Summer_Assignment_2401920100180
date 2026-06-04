// ============================================================
// 54. Spiral Matrix
// Difficulty : Medium
// Language   : C++
// Runtime    : N/A (beats 100.0%)
// Memory     : 9324000 (beats 50.6%)
// Submitted  : 2026-06-04 18:10:16 UTC
// URL        : https://leetcode.com/problems/spiral-matrix/
// ============================================================
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int row = matrix.size();
        int col = matrix[0].size();
        int x = 0;
        int y = 0;
        int dx = 0;
        int dy = 1;
        for (int i = 0; i < row * col; i++) {
            res.push_back(matrix[x][y]);
            matrix[x][y] = 9999;
            if (x + dx < 0 || x + dx >= row || y + dy < 0 || y + dy >= col ||
                matrix[x + dx][y + dy] == 9999) {
                int temp = dx;
                dx = dy;
                dy = -temp;
            }
            x = x + dx;
            y = y + dy;
        }
        return res;
    }
};