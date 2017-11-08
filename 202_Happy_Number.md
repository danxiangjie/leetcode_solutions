Write an algorithm to determine if a number is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Example: 19 is a happy number

```
1^2 + 9^2 = 82
82 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 02 = 1
```

找规律

#### C++

```cpp
class Solution {
public:

    int sum_square(int n) {
        int sum = 0;
        while (n != 0) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        while (n >= 10) {
            n = sum_square(n);
        }
        return n == 1 || n == 7;
    }
};
```
