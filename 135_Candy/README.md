There are N children standing in a line. Each child is assigned a rating value.

You are giving candies to these children subjected to the following requirements:

Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.
What is the minimum candies you must give?

DP

#### Python

```python
class Solution(object):
    def candy(self, ratings):
        """
        :type ratings: List[int]
        :rtype: int
        """
        dp = [1] * len(ratings)

        for i in range(1, len(ratings)):
            if ratings[i] > ratings[i - 1]:
                dp[i] = dp[i - 1] + 1

        for i in range(len(ratings) - 2, -1, -1):
            if ratings[i] > ratings[i + 1]:
                dp[i] = max(dp[i], dp[i + 1] + 1)

        return sum(dp)
```

### C++

```cpp
class Solution {
public:
    int candy(vector<int> &ratings) {

        int n = ratings.size();
        vector<int> dp (n, 1);

        for (int i = 1; i < n; i++)
            if (ratings[i] > ratings[i - 1])
                dp[i] = dp[i - 1] + 1;

        for (int i = n - 2; i >= 0; i--)
            if (ratings[i] > ratings[i + 1] &&  dp[i] <= dp[i+1])
                dp[i] = dp[i+1] + 1;

        int sum_c = 0;
        for (int i = 0; i < n; i++)
            sum_c += dp[i];
        return sum_c;
    }
};
```
