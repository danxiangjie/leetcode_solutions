A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

How many possible unique paths are there?

![robot_maze](robot_maze.png)


Above is a 3 x 7 grid. How many possible unique paths are there?

Note: m and n will be at most 100.

```cpp
inline int min(int m, int n) { return m < n ? m : n; }
class Solution {
public:
    int uniquePaths(int m, int n) {
        int sum = m + n - 2;
        int minn = min(m, n) - 1;
        double up = 1.0, down = 1.0;
        for (int i = 1; i <= minn; i++)
            up *= (sum--) / i;
        return int(up / down);
    }
};
```
