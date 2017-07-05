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