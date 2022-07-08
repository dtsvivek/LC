/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 *
 * https://leetcode.com/problems/longest-palindrome/description/
 *
 * algorithms
 * Easy (53.80%)
 * Likes:    2996
 * Dislikes: 170
 * Total Accepted:    304.1K
 * Total Submissions: 563K
 * Testcase Example:  '"abccccdd"'
 *
 * Given a string s which consists of lowercase or uppercase letters, return
 * the length of the longest palindrome that can be built with those letters.
 * 
 * Letters are case sensitive, for example, "Aa" is not considered a palindrome
 * here.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: s = "abccccdd"
 * Output: 7
 * Explanation: One longest palindrome that can be built is "dccaccd", whose
 * length is 7.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "a"
 * Output: 1
 * Explanation: The longest palindrome that can be built is "a", whose length
 * is 1.
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= s.length <= 2000
 * s consists of lowercase and/or uppercase English letters only.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        int size = s.size();
        int ans = 0;
        if(size ==1){
            return 1;
        }
        unordered_map<char,int> stringhold;
        for(char c:s){
            if (stringhold.count(c)){
                ans++;
                stringhold.erase(c);
            }else{
                stringhold[c] = 1;
            }
           // cout<<c<<ans<<endl;
        }
        ans *=2;
        /*if(size%2 ==1){
            ans++;
        }*/
        for (auto it = stringhold.begin();it!=stringhold.end();it++){
            return ans+1;
        }
        return ans;
    }
};
// @lc code=end

