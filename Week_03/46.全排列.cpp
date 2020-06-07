/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
class Solution {
    private:
    vector<vector<int>> result;
    void recursiveCall(int begin, int end, vector<int>& nums) {
        if (begin == end) {
            result.emplace_back(nums);
        }
        for (int i = begin; i <= end; i++) {
            swap(nums[i], nums[begin]);
            recursiveCall(begin + 1, end, nums);
            swap(nums[i], nums[begin]);
        }
    }


public:
    vector<vector<int>> permute(vector<int>& nums) {
        recursiveCall(0, nums.size() - 1, nums);
        return result;
    }
};
// @lc code=end

