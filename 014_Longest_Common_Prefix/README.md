Write a function to find the longest common prefix string amongst an array of strings.

最长公共前缀，注意 输入为 null, [], ['a'] 的情况。

#### Python

```python
class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if strs == None or len(strs) <= 0:
            return ""
        if len(strs) == 1:
            return strs[0]
        for i in range(len(strs[0])):
            for j in range(1, len(strs)):
                if i > len(strs[j]) - 1 or strs[0][i] != strs[j][i]:
                    return strs[0][:i]
        return strs[0]
```


#### Java

```java
public class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length <= 0)
            return "";
        if (strs.length == 1)
            return strs[0];
        for (int i = 0; i < strs[0].length(); i++)
            for (int j = 1; j < strs.length; j++)
                if (i > strs[j].length() - 1 || strs[0].charAt(i) != strs[j].charAt(i))
                    return strs[0].substring(0, i);
        return strs[0];
    }
}
```

### JS

```javascript
/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    if (strs === null || strs.length === 0)
        return '';
    if (strs.length == 1)
        return strs[0];
    for (var i = 0; i < strs[0].length; i++)
            for (var j = 1; j < strs.length; j++)
                if (i > strs[j].length - 1 || strs[0][i] !== strs[j][i])
                    return strs[0].substring(0, i);
    return strs[0];
};
```
