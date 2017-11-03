Given an integer, convert it to a roman numeral.

Input is guaranteed to be within the range from 1 to 3999.

条件判定。虽然有更简洁的方法，但是有些 tricky。

#### Python

```python
class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        roman = {
            1: 'I',
            5: 'V',
            10: 'X',
            50: 'L',
            100: 'C',
            500: 'D',
            1000: 'M'
        }
        i = 1;
        arr = []
        while num != 0:
            k = num % 10
            if k > 0 and k < 4:
                arr.append(roman[i]*k)     
            elif k == 4:
                arr.append(roman[i] + roman[5*i])
            elif k >= 5 and k < 9:
                arr.append(roman[5*i] + roman[i]*(k-5))
            elif k == 9:
                arr.append(roman[i] + roman[i*10])
            num //= 10
            i *= 10
        return ''.join(arr[::-1])
```

#### Java

```java
public class Solution {
    public String intToRoman(int num) {
        Map<Integer, String> map = new HashMap<>();
        map.put(1, "I");
        map.put(5, "V");
        map.put(10, "X");
        map.put(50, "L");
        map.put(100, "C");
        map.put(500, "D");
        map.put(1000, "M");

        List<String> arr = new ArrayList<>();
        int i = 1;
        while(num != 0) {
            int k = num % 10;
            if (k > 0 && k < 4) {
                String cur = "";
                for (int j = 0; j < k; j++)
                    cur += map.get(i);
                arr.add(cur);
            } else if (k == 4) {
                arr.add(map.get(i) + map.get(5 * i));
            } else if (k >= 5 && k < 9) {
                String cur = map.get(5 * i);
                for (int j = 0; j < k-5; j++)
                    cur += map.get(i);
                arr.add(cur);
            } else if(k == 9) {
                arr.add(map.get(i) + map.get(i*10));
            }
            num /= 10;
            i *= 10;
        }
        String ans = "";
        for (int j = arr.size() - 1; j >= 0; j--)
            ans += arr.get(j);
        return ans;

    }
}
```

#### JS

```javascript
/**
 * @param {number} num
 * @return {string}
 */
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
```
