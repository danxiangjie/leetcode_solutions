/*
 * [66] Plus One
 *
 * https://leetcode.com/problems/plus-one
 *
 * Easy (38.34%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '[0]'
 *
 * Given a non-negative integer represented as a non-empty array of digits,
 * plus one to the integer.
 * 
 * You may assume the integer do not contain any leading zero, except the
 * number 0 itself.
 * 
 * The digits are stored such that the most significant digit is at the head of
 * the list.
 */
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

    	int n = digits.size();
    	vector<int> ans(n);

        digits[n - 1] ++;
        for (int i = n-1; i > 0; i--) {
        	if (digits[i] == 10) {
        		ans[i] = 0;
        		digits[i-1]++;
        	} else {
        		ans[i] = digits[i];
        	}
        }
        if (digits[0] == 10) {
        	ans[0] = 0;
        	ans.insert(ans.begin(), 1);
        } else {
        	ans[0] = digits[0];
        }
        
        return ans;
    }
};
