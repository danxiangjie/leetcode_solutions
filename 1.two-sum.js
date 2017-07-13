/*
 * [1] Two Sum
 *
 * https://leetcode.com/problems/two-sum
 *
 * Easy (33.86%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '[3,2,4]\n6'
 *
 * Given an array of integers, return indices of the two numbers such that they
 * add up to a specific target.
 * 
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice.
 * 
 * 
 * Example:
 * 
 * Given nums = [2, 7, 11, 15], target = 9,
 * 
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 * 
 * 
 */
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */

 // map 的查询是 O(1) 的， 只需要 O(n) 就可以解决这个问题。
 
var twoSum = function(nums, target) {
    var m = new Map();
    for ( i = 0; i < nums.length; i++) {
        if (m.has(target - nums[i])) {
            return [m.get(target - nums[i]), i];
        }
        m.set(nums[i], i);
    }
    return [];
};



// Runtime: 152 ms
