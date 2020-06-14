/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 * 
 * (1)brutal force
 * (2) say if I sell out the stock at ith day
 *     the maxProfit = prices[i] - min(prices(0 ~ i-1))
 */

// @lc code=start
class Solution {
private:
    int getMax(int i, int j) {
        return (i > j ? i : j);
    }
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1) {
            return 0;
        }
        int myProfit = 0;
        int minPrice = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (minPrice > prices[i - 1]) {
                minPrice = prices[i - 1];
            }
            myProfit = getMax(myProfit, prices[i] - minPrice);
        }
        return myProfit;
    }
};
// @lc code=end

