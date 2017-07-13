/*
 * [258] Add Digits
 *
 * https://leetcode.com/problems/add-digits
 *
 * Easy (51.00%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '0'
 *
 * 
 * Given a non-negative integer num, repeatedly add all its digits until the
 * result has only one digit. 
 * 
 * 
 * 
 * For example:
 * 
 * 
 * Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only
 * one digit, return it.
 * 
 * 
 * Follow up:
 * Could you do it without any loop/recursion in O(1) runtime?
 * 
 * 
 * Credits:Special thanks to @jianchao.li.fighter for adding this problem and
 * creating all test cases.
 */

/* 思路：
 * 题意是将一个数的各个位相加，知道只有一位
 * 时间复杂度要求 O(1)
 * 参照：https://en.wikipedia.org/wiki/Digital_root
 * dr(n) = 1 + (n-1) mod 9
 * 可直接求解
 */

class Solution {
public:
    int addDigits(int num) {
        return 1 + (num - 1) % 9;
    }
};
