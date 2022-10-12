/*
 * @lc app=leetcode id=976 lang=cpp
 *
 * [976] Largest Perimeter Triangle
 *
 * https://leetcode.com/problems/largest-perimeter-triangle/description/
 *
 * algorithms
 * Easy (54.23%)
 * Likes:    1776
 * Dislikes: 245
 * Total Accepted:    131.9K
 * Total Submissions: 246K
 * Testcase Example:  '[2,1,2]'
 *
 * Given an integer array nums, return the largest perimeter of a triangle with
 * a non-zero area, formed from three of these lengths. If it is impossible to
 * form any triangle of a non-zero area, return 0.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: nums = [2,1,2]
 * Output: 5
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: nums = [1,2,1]
 * Output: 0
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 3 <= nums.length <= 10^4
 * 1 <= nums[i] <= 10^6
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i= nums.size()-3;
        //cout<<nums[i]+nums[i+1]+nums[i+2]<<endl;
        
        for(int i= nums.size()-3;i>=0;i--){
            
            if(nums[i]+nums[i+1]>nums[i+2]){
                
                cout<<nums[i]<<endl;
                cout<<nums[i+1]<<endl;
                cout<<nums[i+2]<<endl;
                
                return nums[i]+nums[i+1]+nums[i+2];
            }
        }
        
        return 0;
    }
};
// @lc code=end

