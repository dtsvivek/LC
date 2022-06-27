/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
        for (int a:nums){
            x^=a;
        }
        return x;
    }
};
// @lc code=end

