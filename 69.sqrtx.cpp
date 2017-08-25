/*
 * [69] Sqrt(x)
 *
 * https://leetcode.com/problems/sqrtx
 *
 * Easy (27.81%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '0'
 *
 * Implement int sqrt(int x).
 * 
 * Compute and return the square root of x.
 */

// binary search
class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) return x;
        int l = 0, r = x;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (m == x / m)  { r = m; break; }
            if (m < x / m)
                l = m + 1;
            else
                r = m - 1;
        }
        return r;
    }
};


// Newton method 
class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) return x;
        long r = x;
        while (r > x / r)
            r = (r + x / r) / 2;
        return r;
    }
};
