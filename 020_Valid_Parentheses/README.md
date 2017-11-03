Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.


判断有效括号，用栈来保存嵌套情况。

#### Python

```python
class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        parens = {')': '(', '}': '{', ']': '['}
        stack = []
        for x in s:
            if stack and (x in parens and stack[-1] == parens[x]):
                stack.pop()
            else:
                stack.append(x)
        return not stack
```
