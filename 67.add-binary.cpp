/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 *
 * https://leetcode.com/problems/add-binary/description/
 *
 * algorithms
 * Easy (50.69%)
 * Likes:    5270
 * Dislikes: 572
 * Total Accepted:    867K
 * Total Submissions: 1.7M
 * Testcase Example:  '"11"\n"1"'
 *
 * Given two binary strings a and b, return their sum as a binary string.
 * 
 * 
 * Example 1:
 * Input: a = "11", b = "1"
 * Output: "100"
 * Example 2:
 * Input: a = "1010", b = "1011"
 * Output: "10101"
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= a.length, b.length <= 10^4
 * a and b consist only of '0' or '1' characters.
 * Each string does not contain leading zeros except for the zero itself.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        int alen = a.length()-1,blen = b.length()-1;
        int current =0;
        string ans;
        while(alen >= 0 || blen >=0||current == 1){
            current += alen>=0?a[alen--]-'0':0;
            current += blen>=0?b[blen--]-'0':0;
            ans = char(current%2+'0')+ans;
            current = current/2;
        }

        return ans;
    }
};
// @lc code=end

