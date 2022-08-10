/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 *
 * https://leetcode.com/problems/add-strings/description/
 *
 * algorithms
 * Easy (52.32%)
 * Likes:    3409
 * Dislikes: 568
 * Total Accepted:    486.5K
 * Total Submissions: 929.4K
 * Testcase Example:  '"11"\n"123"'
 *
 * Given two non-negative integers, num1 and num2 represented as string, return
 * the sum of num1 and num2 as a string.
 * 
 * You must solve the problem without using any built-in library for handling
 * large integers (such as BigInteger). You must also not convert the inputs to
 * integers directly.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: num1 = "11", num2 = "123"
 * Output: "134"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: num1 = "456", num2 = "77"
 * Output: "533"
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: num1 = "0", num2 = "0"
 * Output: "0"
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= num1.length, num2.length <= 10^4
 * num1 and num2 consist of only digits.
 * num1 and num2 don't have any leading zeros except for the zero itself.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        
        int num1len = num1.size()-1,num2len =num2.size()-1;
        int carry =0;
        string ans = "";
        while(num1len >= 0 || num2len >= 0 || carry ){
            long long sum =0;
            //sum += num1len>=0?num1[num1len--]:0;
            //sum += num2len>=0?num2[num2len--]:0;
            if(num1len >= 0){sum += (num1[num1len] - '0');num1len--;}
            if(num2len >= 0){sum += (num2[num2len] - '0');num2len--;}
            sum += carry;
            carry = sum/10;
            sum = sum%10;
            ans += to_string(sum);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
// @lc code=end

