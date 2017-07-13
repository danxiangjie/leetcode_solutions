#
# [12] Integer to Roman
#
# https://leetcode.com/problems/integer-to-roman
#
# Medium (44.36%)
# Total Accepted:    
# Total Submissions: 
# Testcase Example:  '1'
#
# Given an integer, convert it to a roman numeral.
# 
# 
# Input is guaranteed to be within the range from 1 to 3999.
#

# 条件判定。虽然有更简洁的方法，但是有些 tricky。

class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        roman = {
            1: 'I',
            5: 'V',
            10: 'X',
            50: 'L',
            100: 'C',
            500: 'D',
            1000: 'M'
        }
        i = 1;
        arr = []
        while num != 0:
            k = num % 10
            if k > 0 and k < 4:
                arr.append(roman[i]*k)     
            elif k == 4:
                arr.append(roman[i] + roman[5*i])
            elif k >= 5 and k < 9:
                arr.append(roman[5*i] + roman[i]*(k-5))
            elif k == 9:
                arr.append(roman[i] + roman[i*10])
            num //= 10
            i *= 10
        return ''.join(arr[::-1])


# Runtime: 108ms
        
