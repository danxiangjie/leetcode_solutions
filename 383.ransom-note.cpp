/*
 * [383] Ransom Note
 *
 * https://leetcode.com/problems/ransom-note
 *
 * Easy (47.12%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '"a"\n"b"'
 *
 * 
 * Given an arbitrary ransom note string and another string containing letters
 * from all the magazines, write a function that will return true if the
 * ransom 
 * note can be constructed from the magazines ; otherwise, it will return
 * false. 
 * 
 * 
 * Each letter in the magazine string can only be used once in your ransom
 * note.
 * 
 * 
 * Note:
 * You may assume that both strings contain only lowercase letters.
 * 
 * 
 * 
 * canConstruct("a", "b") -> false
 * canConstruct("aa", "ab") -> false
 * canConstruct("aa", "aab") -> true
 * 
 * 
 */
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mg(26);
        for (auto c : magazine) mg[c]++;
        for (auto c : ransomNote) 
            if (mg[c]-- == 0) return false;
        return true;
    }
};
