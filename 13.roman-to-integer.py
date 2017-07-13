#
# [13] Roman to Integer
#
# https://leetcode.com/problems/roman-to-integer
#
# Easy (45.38%)
# Total Accepted:    
# Total Submissions: 
# Testcase Example:  '"DCXXI"'
#
# Given a roman numeral, convert it to an integer.
# 
# Input is guaranteed to be within the range from 1 to 3999.
#

# 参照 http://www.mathisfun.com/roman-numerals.html
# 转换：前一位小于后一位，减，前一位大于后一位，加。

class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        roman_int = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        sum_int = 0;
        for i in range(len(s)-1):
            if roman_int[s[i]] < roman_int[s[i+1]]:
                sum_int -= roman_int[s[i]]
            else:
                sum_int += roman_int[s[i]]
            
        return sum_int + roman_int[s[-1]];


# Runtime: 219ms
        
