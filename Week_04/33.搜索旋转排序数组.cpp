/*
 * @lc app=leetcode.cn id=33 lang=cpp
 *
 * [33] 搜索旋转排序数组
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mid = 0;

        while (low < high){
            mid = (low + high) / 2;

            if (nums[low] <= nums[mid] && target <= nums[mid] && nums[low] <= target)     
                high = mid;
            else if (nums[low] > nums[mid] && (target >= nums[low] || target <= nums[mid]))     
                high = mid;
            else                                   
                low = mid + 1;
        }
        return low == high && nums[low]==target? low : -1;
        
    }
};
// @lc code=end

