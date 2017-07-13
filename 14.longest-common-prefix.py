#
# [14] Longest Common Prefix
#
# https://leetcode.com/problems/longest-common-prefix
#
# Easy (31.43%)
# Total Accepted:    
# Total Submissions: 
# Testcase Example:  '[]'
#
# Write a function to find the longest common prefix string amongst an array of
# strings.
# 
#

# 最长公共前缀，注意 输入为 null, [], ['a'] 的情况。

class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if strs == None or len(strs) == 0:
            return ""
        if len(strs) == 1:
            return strs[0]
        for i in range(len(strs[0])): 
            for j in range(1, len(strs)):
                if i > len(strs[j]) - 1 or strs[0][i] != strs[j][i]:
                    return strs[0][:i]
        return strs[0]

# Runtime: 42ms
        
