public class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0 || (x > 0 && x % 10 == 0)) return false;
        String xx = new Integer(x).toString();
        String newX = new StringBuilder(xx).reverse().toString();
        return newX.equals(xx);
    }
}

// Runtime: 201ms