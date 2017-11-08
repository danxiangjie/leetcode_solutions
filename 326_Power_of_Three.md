Given an integer, write a function to determine if it is a power of three.

Follow up:
Could you do it without using any loop / recursion?

#### C++

```cpp
class Solution {
public:
    bool isPowerOfThree(int n) {
        double p = log10(n) / log10(3);
        return abs(round(p) - p) == 0;
    }
};
```
