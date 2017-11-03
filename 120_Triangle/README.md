Given a triangle, find the minimum path sum from top to bottom. Each step you may move to adjacent numbers on the row below.

For example, given the following triangle

```
[
     [2],
    [3,4],
   [6,5,7],
  [4,1,8,3]
]
```

The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11).

Note:
Bonus point if you are able to do this using only O(n) extra space, where n is the total number of rows in the triangle.

DP

#### Python

```python
import copy
class Solution(object):
    def minimumTotal(self, triangle):
        """
        :type triangle: List[List[int]]
        :rtype: int
        """
        dp = copy.deepcopy(triangle[-1])
        tr_len = len(triangle)
        for l in range(tr_len - 2, -1, -1):
            for i in range(l+1):
                dp[i] = min(dp[i], dp[i + 1]) + triangle[l][i]
        return dp[0]
```
