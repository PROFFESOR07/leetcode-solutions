/*
 * Problem ID: 121
 * Title: Best Time to Buy and Sell Stock
 * Difficulty: Easy
 * Topics: Array, Dynamic Programming
 * LeetCode URL: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 * Language: C++
 * Submission Date: 2026-06-25T10:29:58.208Z
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {

            // Update minimum buying price
            minPrice = min(minPrice, prices[i]);

            // Calculate profit if sold today
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }

        return maxProfit;
    }
};