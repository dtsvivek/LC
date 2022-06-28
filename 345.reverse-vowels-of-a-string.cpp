/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start
class Solution {
public:
    string reverseVowels(string s) {
        int left = 0,right = s.size()-1;
        while(right>left){
            left = s.find_first_of("aeiouAEIOU",left);
            right = s.find_last_of("aeiouAEIOU",right);
            if(left<right){
                    swap(s[left++],s[right--]);
            }
        }
        return s;
    }
};
// @lc code=end

