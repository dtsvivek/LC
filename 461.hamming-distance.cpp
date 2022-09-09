/*
 * @lc app=leetcode id=461 lang=cpp
 *
 * [461] Hamming Distance
 *
 * https://leetcode.com/problems/hamming-distance/description/
 *
 * algorithms
 * Easy (74.59%)
 * Likes:    3247
 * Dislikes: 202
 * Total Accepted:    491.5K
 * Total Submissions: 657.7K
 * Testcase Example:  '1\n4'
 *
 * The Hamming distance between two integers is the number of positions at
 * which the corresponding bits are different.
 * 
 * Given two integers x and y, return the Hamming distance between them.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: x = 1, y = 4
 * Output: 2
 * Explanation:
 * 1   (0 0 0 1)
 * 4   (0 1 0 0)
 * ⁠      ↑   ↑
 * The above arrows point to positions where the corresponding bits are
 * different.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: x = 3, y = 1
 * Output: 1
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 0 <= x, y <= 2^31 - 1
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int hammingDistance(int x, int y) {
        int dist = 0, n = x ^ y;
        while (n) {
            ++dist;
            n &= n - 1;
        }
        return dist;
    }
};
// @lc code=end

