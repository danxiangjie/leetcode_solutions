You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.

题意：

一个数组里面存有每个房子的钱，如果取两个相邻的房子会报警。问怎么取钱最多。

思路：

贪心取，取当前所在房子的钱时，有两种考虑。

- 取，但是它左边的那个不能取
- 不取，取它左边的那个

#### Python

```python
class Solution(object):
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        dp = [0] + nums
        for i in range(2, len(dp)):
            dp[i] = max(dp[i-1], dp[i-2] + dp[i])
        return dp[-1]
```
