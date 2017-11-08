Write a function that takes a string as input and returns the string reversed.

Example:

Given s = "hello", return "olleh".


#### C++

```cpp
class Solution {
public:
    string reverseString(string s) {
        int n = s.length();
        for (int i = 0; i < n / 2; i++) {
            char tmp = s[i];
            s[i] = s[n - i - 1];
            s[n - i - 1] = tmp;
        }
        return s;
    }
};
```
