/*
 * [461] Hamming Distance
 *
 * https://leetcode.com/problems/hamming-distance
 *
 * Easy (70.35%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '1\n4'
 *
 * The Hamming distance between two integers is the number of positions at
 * which the corresponding bits are different.
 * 
 * Given two integers x and y, calculate the Hamming distance.
 * 
 * Note:
 * 0 ≤ x, y < 231.
 * 
 * 
 * Example:
 * 
 * Input: x = 1, y = 4
 * 
 * Output: 2
 * 
 * Explanation:
 * 1   (0 0 0 1)
 * 4   (0 1 0 0)
 * ⁠      ?   ?
 * 
 * The above arrows point to positions where the corresponding bits are
 * different.
 * 
 * 
 */

/*
 * 按位异或，统计1的个数
 * n & (n-1) 把最后一个1置为0
 */

class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt = 0, n = x ^ y;
        while (n) {
            n &= n-1;
            cnt++;
        }
        return cnt;
    }
};
