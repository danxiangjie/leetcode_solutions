Related to question Excel Sheet Column Title

Given a column title as appear in an Excel sheet, return its corresponding column number.

For example:

```
    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28
```

Credits:
Special thanks to @ts for adding this problem and creating all test cases.

字符串处理，进制转换。

#### C++

```cpp
class Solution {
public:
    int titleToNumber(string s) {
        int n = s.length(), ans = 0;
        for (int i = 0; i < n; i++) {
            ans = ans * 26 + (s[i] - 'A' + 1);
        }
        return ans;
    }
};
```
