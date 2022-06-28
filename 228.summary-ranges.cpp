/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
 */

// @lc code=start
class Solution {
public:

    vector<string> summaryRanges(vector<int>& nums) {
        using namespace std;
        vector<string> ans;
        if(!nums.size()) return ans;
        int left = nums[0];
        for (int i = 0; i<nums.size();i++){
            if(i == nums.size()-1 || nums[i]+1 != nums[i+1]){
                if(nums[i]!=left) {ans.push_back(to_string(left)+ "->"+ to_string(nums[i]));}
                else {ans.push_back(to_string(left));}
                if(i != nums.size()-1){left = nums[i+1];}
            }
        }
        
        return ans;
    }
};
// @lc code=end

