/*
 * [561] Array Partition I
 *
 * https://leetcode.com/problems/array-partition-i
 *
 * Easy (68.30%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '[1,4,3,2]'
 *
 * 
 * Given an array of 2n integers, your task is to group these integers into n
 * pairs of integer, say (a1, b1), (a2, b2), ..., (an, bn) which makes sum of
 * min(ai, bi) for all i from 1 to n as large as possible.
 * 
 * 
 * Example 1:
 * 
 * Input: [1,4,3,2]
 * 
 * Output: 4
 * Explanation: n is 2, and the maximum sum of pairs is 4 = min(1, 2) + min(3,
 * 4).
 * 
 * 
 * 
 * Note:
 * 
 * n is a positive integer, which is in the range of [1, 10000].
 * All the integers in the array will be in the range of [-10000, 10000].
 * 
 * 
 */

/* 思路：
 * 尽量把大的和大的放在一起，小的和小的放在一起，如果一大一小的话会浪费掉大的。
 * 排序，隔一个相加。
 * 内建 sort函数 的时间复杂度是 O(nlogn)，可以接受。
 */

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i = 0; i < nums.size(); i += 2) {
            sum += nums[i];
        }
        return sum;
    }
};
