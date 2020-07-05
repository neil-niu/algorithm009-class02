/*
 * @lc app=leetcode.cn id=647 lang=cpp
 *
 * [647] 回文子串
 */

// @lc code=start
bool dp[1001][1001] = {false};
class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            dp[i][i] = true;
            count++;
        }
        for (int i = s.length() - 1; i >=0; i--) {
            for (int j = i + 1; j < s.length(); j++) {
                if (s[i] == s[j]) {
                    if (i == j - 1) {
                        count++;
                        dp[i][j] = true;
                    } else {
                        dp[i][j] = dp[i + 1][j - 1];
                        if (dp[i][j]) {
                            count++;
                        }
                    }
                } else {
                    dp[i][j] = false;
                }
            }
        }
        return count;
    }
};
// @lc code=end

