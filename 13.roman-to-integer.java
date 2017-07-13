/*
 * [13] Roman to Integer
 *
 * https://leetcode.com/problems/roman-to-integer
 *
 * Easy (45.38%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '"DCXXI"'
 *
 * Given a roman numeral, convert it to an integer.
 * 
 * Input is guaranteed to be within the range from 1 to 3999.
 */

// 参照 http://www.mathisfun.com/roman-numerals.html
// 转换：前一位小于后一位，减，前一位大于后一位，加。

public class Solution {
    public int romanToInt(String s) {
        Map<String, Integer> map = new HashMap<>();
        map.put("I", 1);
        map.put("V", 5);
        map.put("X", 10);
        map.put("L", 50);
        map.put("C", 100);
        map.put("D", 500);
        map.put("M", 1000);
        int sum = 0;
        int i = 0;
        String[] ss = s.split("");
        for(i = 0; i < ss.length - 1; i++) {
            if (map.get(ss[i]) < map.get(ss[i+1]))
                sum -= map.get(ss[i]);
            else
                sum += map.get(ss[i]);
        }
        return sum + map.get(ss[i]);
    }
}

// Runtime: 133ms