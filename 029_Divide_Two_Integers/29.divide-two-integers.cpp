/*
 * [29] Divide Two Integers
 *
 * https://leetcode.com/problems/divide-two-integers
 *
 * Medium (15.98%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '0\n1'
 *
 * 
 * Divide two integers without using multiplication, division and mod
 * operator.
 * 
 * 
 * If it is overflow, return MAX_INT.
 * 
 */

class Solution {
public:
    int divide(int dividend, int divisor) {

        if (divisor == 0 || (dividend == INT_MIN && divisor == -1)) {
        	return INT_MAX;
        }

        if (divisor == INT_MIN) {
        	return dividend == INT_MIN ? 1 : 0;
        }

		bool sign = (dividend < 0) ^ (divisor < 0);

        int sum = 0;
        if (dividend == INT_MIN) {
        	dividend = -(dividend + abs(divisor));
        	sum ++;
        }

        dividend = abs(dividend);
        divisor = abs(divisor);
        
        while (dividend >= divisor) {
        	long tmp = divisor, multiple = 1;
        	while (dividend >= (tmp << 1)) {
        		tmp <<= 1;
        		multiple <<= 1;
        	}
        	dividend -= tmp;
        	sum += multiple;
        }
        return sign ? -sum : sum;
    }
};
