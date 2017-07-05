public class Solution {
    public int romanToInt(String s) {
        Map<String, Integer> map = new HashMap<>();
        map.put("I", 1);
        map.put("V", 5);
        map.put("X", 10);
        map.put("L", 50);
        map.put("C", 100);
        map.put("D", 500);
        map.put("M", 1000);
        int sum = 0;
        int i = 0;
        String[] ss = s.split("");
        for(i = 0; i < ss.length - 1; i++) {
            if (map.get(ss[i]) < map.get(ss[i+1]))
                sum -= map.get(ss[i]);
            else
                sum += map.get(ss[i]);
        }
        return sum + map.get(ss[i]);
    }
}

// Runtime: 133ms