# %%
"""
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'."""

#%%
class Solution:
    def isValid(self, s: str) -> bool:
        
        rounddict,curlydict,squaredict = 0,0,0
        
        currentopens = []
        
        opens = ['[','{','(']
        closes = [']','}',')']
        
        for c in s:
            
            if c in opens:
                currentopens.append(c)
                if c =='[' : squaredict += 1
                if c == '{' : curlydict += 1
                if c == '(': rounddict +=1
                    
            if c in closes:
                if len(currentopens) == 0: return False
                pop = currentopens.pop(-1)
                if c == ']':
                    if pop != '[': return False
                    squaredict -= 1
                if c == '}':
                    if pop != '{': return False
                    curlydict -= 1
                if c == ')':
                    if pop != '(': return False
                    rounddict -= 1
        
        if (rounddict != 0) or (squaredict != 0) or (curlydict != 0):
            return False
 
        return True

# %%
