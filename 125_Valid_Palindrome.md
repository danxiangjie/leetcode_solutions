Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

For example,
`"A man, a plan, a canal: Panama"` is a palindrome.
`"race a car"` is not a palindrome.

Note:

Have you consider that the string might be empty? This is a good question to ask during an interview.

For the purpose of this problem, we define empty string as valid palindrome.

回文串。

#### Python

```python
class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        import re
        all_alphanum = re.findall('[0-9a-z]', s.lower())
        l_len = len(all_alphanum)
        for i in range(l_len / 2):
            if all_alphanum[i] != all_alphanum[l_len - 1 - i]:
                return False
        return True
```
