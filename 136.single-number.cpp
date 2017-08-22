/*
 * [136] Single Number
 *
 * https://leetcode.com/problems/single-number
 *
 * Easy (54.40%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '[1]'
 *
 * Given an array of integers, every element appears twice except for one. Find
 * that single one.
 * 
 * 
 * Note:
 * Your algorithm should have a linear runtime complexity. Could you implement
 * it without using extra memory?
 * 
 */
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (auto i : nums)
            ans ^= i;
        return ans;
    }
};
