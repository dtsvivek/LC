/*
 * @lc app=leetcode id=374 lang=cpp
 *
 * [374] Guess Number Higher or Lower
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low = 1,high=n,mid;
        while(high>=low){
            mid = low+(high-low)/2;
            int check = guess(mid);
            if(check==0) return mid;
            if(check==-1){
                high =mid-1;
            }if(check ==1){
                low=mid+1;
            }
        }
        return -1;
    }
};
// @lc code=end

