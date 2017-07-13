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

// map 的查询是 O(1) 的， 只需要 O(n) 就可以解决这个问题。

public class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        int [] result = new int[2];
        for (int i = 0; i < nums.length; i++) {
            if (map.containsKey(target - nums[i])) {
                result[1] = i;
                result[0] = map.get(target - nums[i]);
                return result;
            }
            map.put(nums[i], i);
        }
        
        return new int[]{0, 1};
    }
}


// Runtime: 9ms
