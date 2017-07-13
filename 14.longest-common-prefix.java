/*
 * [14] Longest Common Prefix
 *
 * https://leetcode.com/problems/longest-common-prefix
 *
 * Easy (31.43%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '[]'
 *
 * Write a function to find the longest common prefix string amongst an array
 * of strings.
 * 
 */

/*
 * 最长公共前缀，注意 输入为 null, [], ['a'] 的情况。
 */

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

// Runtime: 13ms
