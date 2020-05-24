/*

 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> my_map;
        for (int i = 0; i < nums.size(); i++) {
            my_map[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int temp = target - nums[i];
            if ((my_map.find(temp) != my_map.end())&& (my_map[temp] != i)) {
                return {i, my_map[temp]};
            }
        }
        return {};
    }
};
// @lc code=end

