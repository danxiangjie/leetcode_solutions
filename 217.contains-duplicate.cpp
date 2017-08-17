/*
 * [217] Contains Duplicate
 *
 * https://leetcode.com/problems/contains-duplicate
 *
 * Easy (45.61%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '[]'
 *
 * 
 * Given an array of integers, find if the array contains any duplicates. Your
 * function should return true if any value appears at least twice in the
 * array, and it should return false if every element is distinct.
 * 
 */
#include <set>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        for (int i = 0; i < nums.size(); i++) {
            if (st.insert(nums[i]).second == false)
                return true;
        }
        return false;
    }
};
