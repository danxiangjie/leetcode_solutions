/*
 * [500] Keyboard Row
 *
 * https://leetcode.com/problems/keyboard-row
 *
 * Easy (59.96%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '["Hello","Alaska","Dad","Peace"]'
 *
 * Given a List of words, return the words that can be typed using letters of
 * alphabet on only one row's of American keyboard like the image
 * below. 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * Example 1:
 * 
 * Input: ["Hello", "Alaska", "Dad", "Peace"]
 * Output: ["Alaska", "Dad"]
 * 
 * 
 * 
 * Note:
 * 
 * You may use one character in the keyboard more than once.
 * You may assume the input string will only contain letters of alphabet.
 * 
 * 
 */
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string rows[3] = {"qwertyuiopQWERTYUIOP", "asdfghjklASDFGHJKL", "zxcvbnmZXCVBNM"};
        map<char, int> alpha;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < rows[i].length(); j++)
                alpha[rows[i][j]] = i;
        
        vector<string> newWords;
        for (auto str : words) {
            bool flag = true;
            int row = alpha[str[0]];
            for (int j = 1; j < str.length(); j++)
                if (row != alpha[str[j]]) {
                    flag = false;
                    break;
                }
            if (flag)
                newWords.push_back(str);
        }
        return newWords;
    }
};