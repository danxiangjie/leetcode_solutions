Implement strStr().

Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

返回第一个出现的子串的起始id

#### Python

```python
class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        n_len = len(needle)
        for i in range(len(haystack) - n_len+1):
            if haystack[i: i+n_len] == needle:
                return i
        return -1
```
