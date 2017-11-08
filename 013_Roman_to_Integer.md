Given a roman numeral, convert it to an integer.

Input is guaranteed to be within the range from 1 to 3999.

参照 http://www.mathisfun.com/roman-numerals.html

转换：前一位小于后一位，减，前一位大于后一位，加。

#### Python

```python
class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        roman_int = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        sum_int = 0;
        for i in range(len(s)-1):
            if roman_int[s[i]] < roman_int[s[i+1]]:
                sum_int -= roman_int[s[i]]
            else:
                sum_int += roman_int[s[i]]

        return sum_int + roman_int[s[-1]];
```

#### Java

```java
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
```

#### JS

```javascript
/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    var roman_int = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        };
    var sum_int = 0;
    for (var i = 0; i < s.length - 1; i++) {
        if (roman_int[s[i]] < roman_int[s[i+1]])
            sum_int -= roman_int[s[i]];
        else
            sum_int += roman_int[s[i]];
    }
    return sum_int + roman_int[s[s.length - 1]];
};
```
