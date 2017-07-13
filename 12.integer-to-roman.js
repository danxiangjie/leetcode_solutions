/*
 * [12] Integer to Roman
 *
 * https://leetcode.com/problems/integer-to-roman
 *
 * Medium (44.36%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '1'
 *
 * Given an integer, convert it to a roman numeral.
 * 
 * 
 * Input is guaranteed to be within the range from 1 to 3999.
 */
/**
 * @param {number} num
 * @return {string}
 */

 // 条件判定。虽然有更简洁的方法，但是有些 tricky。
 
var intToRoman = function(num) {
    var roman = {
        1: 'I',
        5: 'V',
        10: 'X',
        50: 'L',
        100: 'C',
        500: 'D',
        1000: 'M'
    }
    var i = 1;
    var cnt = 0;
    var arr = []
    while (num !== 0) {
        var k = num % 10;
        if (k > 0 && k < 4) {
            var cur = '';
            while(k--)
                cur += roman[i];
            arr.push(cur);
        } else if (k == 4) {
            arr.push(roman[i] + roman[5*i]);
        } else if (k >= 5 && k < 9) {
            cur = roman[5*i];
            for (var j = 0; j < k - 5; j++)
                cur += roman[i];
            arr.push(cur);
        }else if (k == 9) {
            arr.push(roman[i] + roman[i*10]);
        }
        num = parseInt(num / 10);
        i *= 10;
    }
    var ans = '';
    for (var x = arr.length - 1; x >= 0; x--)
        ans += arr[x];
    return ans;
};

// Runtime: 239ms
