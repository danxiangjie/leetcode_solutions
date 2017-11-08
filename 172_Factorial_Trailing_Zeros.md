Given an integer n, return the number of trailing zeroes in n!.

Note: Your solution should be in logarithmic time complexity.

Credits:
Special thanks to @ts for adding this problem and creating all test cases.


n!末尾有多少个0。

推理题。尾数0为10的倍数，10=5x2，统计5的情况就可以了。


#### Python

```python
class Solution(object):
    def trailingZeroes(self, n):
        """
        :type n: int
        :rtype: int
        """
        total = 0

        while n >= 1:
            n /= 5
            total += n
        return total
```
