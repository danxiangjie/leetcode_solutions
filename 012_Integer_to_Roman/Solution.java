public class Solution {
    public String intToRoman(int num) {
        Map<Integer, String> map = new HashMap<>();
        map.put(1, "I");
        map.put(5, "V");
        map.put(10, "X");
        map.put(50, "L");
        map.put(100, "C");
        map.put(500, "D");
        map.put(1000, "M");
        
        List<String> arr = new ArrayList<>();
        int i = 1;
        while(num != 0) {
            int k = num % 10;
            if (k > 0 && k < 4) {
                String cur = "";
                for (int j = 0; j < k; j++)
                    cur += map.get(i);
                arr.add(cur);
            } else if (k == 4) {
                arr.add(map.get(i) + map.get(5 * i));
            } else if (k >= 5 && k < 9) {
                String cur = map.get(5 * i);
                for (int j = 0; j < k-5; j++)
                    cur += map.get(i);
                arr.add(cur);
            } else if(k == 9) {
                arr.add(map.get(i) + map.get(i*10));
            }
            num /= 10;
            i *= 10;
        }
        String ans = "";
        for (int j = arr.size() - 1; j >= 0; j--)
            ans += arr.get(j);
        return ans;
        
    }
}


// Runtime: 108ms