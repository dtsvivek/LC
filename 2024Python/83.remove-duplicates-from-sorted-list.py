#
# @lc app=leetcode id=83 lang=python3
#
# [83] Remove Duplicates from Sorted List
#
# https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
#
# algorithms
# Easy (49.24%)
# Likes:    6073
# Dislikes: 212
# Total Accepted:    1M
# Total Submissions: 2M
# Testcase Example:  '[1,1,2]'
#
# Given the head of a sorted linked list, delete all duplicates such that each
# element appears only once. Return the linked list sorted as well.
# 
# 
# Example 1:
# 
# 
# Input: head = [1,1,2]
# Output: [1,2]
# 
# 
# Example 2:
# 
# 
# Input: head = [1,1,2,3,3]
# Output: [1,2,3]
# 
# 
# 
# Constraints:
# 
# 
# The number of nodes in the list is in the range [0, 300].
# -100 <= Node.val <= 100
# The list is guaranteed to be sorted in ascending order.
# 
# 
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head:
           return None
        
        temp = head
        nexttemp = head.next
        lastval = head.val

        while nexttemp:
            #print(lastval)
            #print(nexttemp)
            if (nexttemp.val == lastval):
                if not nexttemp.next:
                    temp.next = None
                    break
                nexttemp = nexttemp.next
                temp.next = nexttemp
            else:
                temp = nexttemp
                lastval = temp.val
                nexttemp = nexttemp.next

        return head
# @lc code=end

