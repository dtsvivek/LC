/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 *
 * https://leetcode.com/problems/power-of-four/description/
 *
 * algorithms
 * Easy (44.29%)
 * Likes:    2574
 * Dislikes: 314
 * Total Accepted:    397.7K
 * Total Submissions: 875.4K
 * Testcase Example:  '16'
 *
 * Given an integer n, return true if it is a power of four. Otherwise, return
 * false.
 *
 * An integer n is a power of four, if there exists an integer x such that n ==
 * 4^x.
 *
 *
 * Example 1:
 * Input: n = 16
 * Output: true
 * Example 2:
 * Input: n = 5
 * Output: false
 * Example 3:
 * Input: n = 1
 * Output: true
 *
 *
 * Constraints:
 *
 *
 * -2^31 <= n <= 2^31 - 1
 *
 *
 *
 * Follow up: Could you solve it without loops/recursion?
 */

// @lc code=start
class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n == 1)
            return true;
        if (n % 2 == 1)
            return false;
        while(n>1){
            cout<<n;
            if(n%4!=0) return false;
            n = n/4;
            if(n==1)
                return true;
        }
        return false;
    }
};
// @lc code=end
