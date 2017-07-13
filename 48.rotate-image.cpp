/*
 * [48] Rotate Image
 *
 * https://leetcode.com/problems/rotate-image
 *
 * Medium (38.32%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '[[1]]'
 *
 * You are given an n x n 2D matrix representing an image.
 * Rotate the image by 90 degrees (clockwise).
 * Follow up:
 * Could you do this in-place?
 */

/*
 * 规律题，在纸上把位置的变化推导一下
 */

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n / 2; i++) {
            for (int j = i; j < n - i - 1; j++) {
                swap(matrix[i][j], matrix[j][n-i-1]);
                swap(matrix[i][j], matrix[n-i-1][n-j-1]);
                swap(matrix[i][j], matrix[n-j-1][i]);
            }
        }
    }
};
