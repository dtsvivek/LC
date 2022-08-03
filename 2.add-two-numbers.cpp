/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 *
 * https://leetcode.com/problems/add-two-numbers/description/
 *
 * algorithms
 * Medium (38.87%)
 * Likes:    19576
 * Dislikes: 3934
 * Total Accepted:    2.9M
 * Total Submissions: 7.4M
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * You are given two non-empty linked lists representing two non-negative
 * integers. The digits are stored in reverse order, and each of their nodes
 * contains a single digit. Add the two numbers and return the sum as a linked
 * list.
 * 
 * You may assume the two numbers do not contain any leading zero, except the
 * number 0 itself.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: l1 = [2,4,3], l2 = [5,6,4]
 * Output: [7,0,8]
 * Explanation: 342 + 465 = 807.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: l1 = [0], l2 = [0]
 * Output: [0]
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
 * Output: [8,9,9,9,0,0,0,1]
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * The number of nodes in each linked list is in the range [1, 100].
 * 0 <= Node.val <= 9
 * It is guaranteed that the list represents a number that does not have
 * leading zeros.
 * 
 * 
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    long long int getnum(ListNode* l){
        int power = 0;
        long long int ans = 0;
        while(l){
            ans += l->val*pow(10,power++);
            l = l->next;
        }
        cout<<ans<<"getnum"<<endl;
        return ans;
    }

    ListNode* reversenum(long long int num){
        ListNode* ret = new ListNode(0);
        if(num == 0)return ret;
        ListNode* head = ret;
        while(num>0){
            long long int digit = num%10;
            num = num/10;
            ret->next = new ListNode(digit);
            ret = ret->next;
        }
        return head->next;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1)return l2;
        if(!l2)return l1;

        long long int numone = getnum(l1);
        long long int numtwo = getnum(l2);
        cout<<numone<<"numone"<<endl;
        cout<<numtwo<<"numtwo"<<endl;
        long long int ans = numone+numtwo;
        cout<<ans<<"ans"<<endl;
        return reversenum(ans);
    }
};
// @lc code=end

