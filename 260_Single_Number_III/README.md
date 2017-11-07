Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.

For example:

Given nums = [1, 2, 1, 3, 2, 5], return [3, 5].

Note:

The order of the result is not important. So in the above example, [5, 3] is also correct.

Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?

#### C++

```cpp
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xval = 0;
        for (auto num : nums) xval ^= num;
        int a = 0, b = 0, lastDif = xval & ~(xval - 1);
        for (auto num : nums) {
            if (lastDif & num)
                a ^= num;
            else
                b ^= num;
        }
        return vector<int> {a, b};
    }
};
```
