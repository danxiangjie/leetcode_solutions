Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].


map 的查询是 O(1) 的， 只需要 O(n) 就可以解决这个问题。

####  Python

```python
class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        dt = {}
        for i in range(len(nums)):
            if target - nums[i] in dt:
                return [dt[target-nums[i]], i]
            dt[nums[i]] = i
        return []
```

#### Java

```python
