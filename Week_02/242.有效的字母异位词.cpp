/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 * */

#include <string>

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        char array[26] = {0};
        for (auto ch : s) {
            array[ch - 'a'] ++;
        }

        for (auto ch: t) {
            array[ch - 'a'] --;
        }

        for (int i = 0; i < 26; i++) {
            if (array[i] != 0) {
                return false;
            }
        }
        
        return true;
    }
};
// @lc code=end

