/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        // string t.length() >> string s.length()

        int len = s.size();

        for(int i =0; i<len;i++){
            t[i+1]+=t[i]-s[i];
        }
        return t[t.size()-1];
        
    }
};
// @lc code=end

