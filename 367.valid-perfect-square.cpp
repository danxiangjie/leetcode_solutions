/*
 * [367] Valid Perfect Square
 *
 * https://leetcode.com/problems/valid-perfect-square
 *
 * Easy (38.06%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '16'
 *
 * Given a positive integer num, write a function which returns True if num is
 * a perfect square else False.
 * 
 * 
 * Note: Do not use any built-in library function such as sqrt.
 * 
 * 
 * Example 1:
 * 
 * Input: 16
 * Returns: True
 * 
 * 
 * 
 * Example 2:
 * 
 * Input: 14
 * Returns: False
 * 
 * 
 * 
 * Credits:Special thanks to @elmirap for adding this problem and creating all
 * test cases.
 */

/* 思路：
 * 判断一个数的平方根是不是整数，不能使用 sqrt 等内建方法
 * 二分查找，直到找到平方等于该数的数
 * 注意越界，使用 long
 */

class Solution {
public:
    bool isPerfectSquare(int num) {
        long low = 1, high = num;
        while(low <= high) {
        	long mid = (low + high) >> 1;
        	long curNum = mid * mid;
        	if (curNum == num) {
        		return true;
        	} else if (curNum < num) {
        		low = mid + 1;
        	} else {
        		high = mid - 1;
        	}
        }
        return false;
    }
};
