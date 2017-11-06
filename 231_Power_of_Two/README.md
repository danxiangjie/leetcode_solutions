Given an integer, write a function to determine if it is a power of two.

2的幂代表只有一个1

#### C++

```cpp
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && !(n & (n - 1));
    }
};
```
