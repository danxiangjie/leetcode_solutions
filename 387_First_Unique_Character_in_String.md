Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:

```
s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
```

Note: You may assume the string contain only lowercase letters.

#### Python

```python
class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        letters = string.ascii_lowercase
        indexes = [s.index(i) for i in letters if s.count(i) == 1]
        return min(indexes) if len(indexes) > 0 else -1
```
