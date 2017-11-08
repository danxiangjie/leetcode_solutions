Given two arrays, write a function to compute their intersection.

Example:

Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2].

Note:

Each element in the result must be unique.
The result can be in any order.

#### C++

```cpp
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> inter;
        unordered_set<int> u_set (nums1.begin(), nums1.end());

        for (auto num : nums2)
            if (u_set.find(num) != u_set.end()) {
                inter.push_back(num);
                u_set.erase(num);
            }

        return inter;
    }
};
```
