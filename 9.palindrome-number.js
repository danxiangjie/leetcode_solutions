/*
 * [9] Palindrome Number
 *
 * https://leetcode.com/problems/palindrome-number
 *
 * Easy (35.12%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '-2147483648'
 *
 * Determine whether an integer is a palindrome. Do this without extra space.
 * 
 * click to show spoilers.
 * 
 * Some hints:
 * 
 * Could negative integers be palindromes? (ie, -1)
 * 
 * If you are thinking of converting the integer to string, note the
 * restriction of using extra space.
 * 
 * You could also try reversing an integer. However, if you have solved the
 * problem "Reverse Integer", you know that the reversed integer might
 * overflow. How would you handle such case?
 * 
 * There is a more generic way of solving this problem.
 * 
 * 
 */
/**
 * @param {number} x
 * @return {boolean}
 */

 // 回文数字，注意负数以及前导0。
 
var isPalindrome = function(x) {
    if (x < 0 || (x > 0 && x % 10 === 0))
        return false;
    var x_s = x.toString().split("");
    for (var i = 0; i <= x_s.length / 2; i++) {
        if (x_s[i] !== x_s[x_s.length - i - 1])
            return false;
    }
    return true;
};


// Runtime: 345ms