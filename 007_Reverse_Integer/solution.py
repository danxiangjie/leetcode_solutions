class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        flag = cmp(x, 0)
        x *= flag
        
        result = 0
        while x != 0:
            k = x % 10
            result = result * 10 + k
            if result >= 2**31:
                return 0
            x //= 10
        return result * flag
    
    # Runtime: 42ms