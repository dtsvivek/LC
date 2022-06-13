#%%
"""
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
"""
# %%
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        
        ##counter = collections.Counter(nums)
        
        ##return(counter.most_common(1)[0][0])
        
        counter = {}
        if len(nums) == 1: return nums[0]
        
        for num in nums:
            if num in counter:
                counter[num] += 1
                if(counter[num]>(len(nums)/2)):
                    return num
            else: counter[num] = 1
            
        #print (counter)