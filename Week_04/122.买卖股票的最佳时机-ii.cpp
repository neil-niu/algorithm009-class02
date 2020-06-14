/*
 * @lc app=leetcode.cn id=122 lang=cpp
 * grasp every chance to trade the stock
 * how to define the chance:
 * if (prices[i] > prices[i - 1]) , you can trade the stock
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start
class Solution {
private:
    int getMax(int x, int y) {
        return (x > y ? x : y);
    }
public:
    int maxProfit(vector<int>& prices) {
        int myProfit = 0;
        if (prices.size() <= 1) {
            return 0;
        }
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] >  prices[i - 1]){
                myProfit = myProfit + (prices[i] - prices[i-1]);
            }
        }

        return myProfit;
    }
};
// @lc code=end

