Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.

逐项替换

#### Python

```python
class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums:
            return 0
        cur_i = 0

        for i in range(1, len(nums)):
            if nums[i] != nums[cur_i]:
                cur_i += 1
                nums[cur_i] = nums[i]
        return cur_i + 1
```
