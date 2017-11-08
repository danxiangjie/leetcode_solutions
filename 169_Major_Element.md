Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Credits:
Special thanks to @ts for adding this problem and creating all test cases.

出现超过一半的数。

#### C++

```cpp
#include <map>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            mp[nums[i]]++;
            if (mp[nums[i]] > n / 2)
                return nums[i];
        }
        return 0;
    }
};
```
