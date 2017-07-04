#!/usr/bin/python
# -*- coding: utf-8 -*-

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

# Runtime: 62ms