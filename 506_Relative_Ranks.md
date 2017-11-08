Given scores of N athletes, find their relative ranks and the people with the top three highest scores, who will be awarded medals: "Gold Medal", "Silver Medal" and "Bronze Medal".

Example 1:

```
Input: [5, 4, 3, 2, 1]
Output: ["Gold Medal", "Silver Medal", "Bronze Medal", "4", "5"]
Explanation: The first three athletes got the top three highest scores, so they got "Gold Medal", "Silver Medal" and "Bronze Medal".
For the left two athletes, you just need to output their relative ranks according to their scores.
```

Note:

- N is a positive integer and won't exceed 10,000.
- All the scores of athletes are guaranteed to be unique.


#### C++

```cpp
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        auto comparator = [&nums](int a, int b){ return int(nums[a]) > int(nums[b]); };
        vector<int> y(nums.size());
        iota(y.begin(), y.end(), 0);
        sort(y.begin(), y.end(), comparator);
        vector<string> result(nums.size());
        for (int i = 0; i < y.size(); i++) {
            if (i == 0)
                result[y[i]] = "Gold Medal";
            else if (i == 1)
                result[y[i]] = "Silver Medal";
            else if (i == 2)
                result[y[i]] = "Bronze Medal";
            else
                result[y[i]] = to_string(i + 1);
        }
        return result;
    }
};
```
