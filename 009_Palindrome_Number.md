Determine whether an integer is a palindrome. Do this without extra space.

click to show spoilers.

Some hints:
Could negative integers be palindromes? (ie, -1)

If you are thinking of converting the integer to string, note the restriction of using extra space.

You could also try reversing an integer. However, if you have solved the problem "Reverse Integer", you know that the reversed integer might overflow. How would you handle such case?

There is a more generic way of solving this problem.

回文数字，注意负数以及前导0。

#### Python

```python
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0 or (x > 0 and x % 10 == 0):
            return False;
        return str(x) == str(x)[::-1];
```

#### Java

```java
public class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0 || (x > 0 && x % 10 == 0)) return false;
        String xx = new Integer(x).toString();
        String newX = new StringBuilder(xx).reverse().toString();
        return newX.equals(xx);
    }
}
```

#### JS

```javascript
/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if (x < 0 || (x > 0 && x % 10 == 0))
        return false;
    var x_s = x.toString().split("");
    for (var i = 0; i <= x_s.length / 2; i++) {
        if (x_s[i] !== x_s[x_s.length - i - 1])
            return false;
    }
    return true;
};
```
