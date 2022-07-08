/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 *
 * https://leetcode.com/problems/valid-perfect-square/description/
 *
 * algorithms
 * Easy (43.11%)
 * Likes:    2516
 * Dislikes: 243
 * Total Accepted:    388.4K
 * Total Submissions: 899.9K
 * Testcase Example:  '16'
 *
 * Given a positive integer num, write a function which returns True if num is
 * a perfect square else False.
 * 
 * Follow up: Do not use any built-in library function such as sqrt.
 * 
 * 
 * Example 1:
 * Input: num = 16
 * Output: true
 * Example 2:
 * Input: num = 14
 * Output: false
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= num <= 2^31 - 1
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        // if n*n == N return true
        // n< N/2

        //Newton method of guessing root:
        //root = 0.5*(X + N/X) :N is the square X is the guess root'

        long int guess = num;

        while(guess * guess > num){
            guess = (guess + (num)/guess)/2;
        }

        return num == guess*guess;
    }
};
// @lc code=end

