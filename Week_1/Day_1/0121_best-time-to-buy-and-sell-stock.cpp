// ============================================================
// 121. Best Time to Buy and Sell Stock
// Difficulty : Easy
// Language   : C++
// Runtime    : N/A (beats 100.0%)
// Memory     : 97496000 (beats 24.2%)
// Submitted  : 2025-09-23 16:04:27 UTC
// URL        : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// ============================================================
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy_price = prices[0];
        int size = prices.size();
        for (int i = 0; i < size; i++) {
            buy_price = min(buy_price, prices[i]);
            profit = max(prices[i] - buy_price, profit);
        }
        return profit;
    }
};