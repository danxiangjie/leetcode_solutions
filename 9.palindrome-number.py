#
# [9] Palindrome Number
#
# https://leetcode.com/problems/palindrome-number
#
# Easy (35.12%)
# Total Accepted:    
# Total Submissions: 
# Testcase Example:  '-2147483648'
#
# Determine whether an integer is a palindrome. Do this without extra space.
# 
# click to show spoilers.
# 
# Some hints:
# 
# Could negative integers be palindromes? (ie, -1)
# 
# If you are thinking of converting the integer to string, note the restriction
# of using extra space.
# 
# You could also try reversing an integer. However, if you have solved the
# problem "Reverse Integer", you know that the reversed integer might overflow.
# How would you handle such case?
# 
# There is a more generic way of solving this problem.
# 
# 
#

# 回文数字，注意负数以及前导0。

class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0 or (x > 0 and x % 10 == 0):
            return False;
        return str(x) == str(x)[::-1];
        
# Runtime: 238ms
        
