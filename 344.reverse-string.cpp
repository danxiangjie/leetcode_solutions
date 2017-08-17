/*
 * [344] Reverse String
 *
 * https://leetcode.com/problems/reverse-string
 *
 * Easy (59.08%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '"hello"'
 *
 * Write a function that takes a string as input and returns the string
 * reversed.
 * 
 * 
 * Example:
 * Given s = "hello", return "olleh".
 * 
 */
class Solution {
public:
    string reverseString(string s) {
        int n = s.length();
        for (int i = 0; i < n / 2; i++) {
            char tmp = s[i];
            s[i] = s[n - i - 1];
            s[n - i - 1] = tmp;
        }
        return s;
    }
};
