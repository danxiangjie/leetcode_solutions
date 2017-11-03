Implement int sqrt(int x).

Compute and return the square root of x.

两种方法，二分查找，牛顿法

#### C++

```cpp
// binary search
class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) return x;
        int l = 0, r = x;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (m == x / m)  { r = m; break; }
            if (m < x / m)
                l = m + 1;
            else
                r = m - 1;
        }
        return r;
    }
};
```

```cpp
// Newton method
class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) return x;
        long r = x;
        while (r > x / r)
            r = (r + x / r) / 2;
        return r;
    }
};
```
