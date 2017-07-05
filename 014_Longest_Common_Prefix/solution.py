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