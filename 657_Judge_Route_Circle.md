Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L (Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

Example 1:

```
Input: "UD"
Output: true
```

Example 2:

```
Input: "LL"
Output: false
```

#### C++

```cpp
class Solution {
public:
    bool judgeCircle(string moves) {
        int up = 0, right = 0;
        for (int i = 0; i < moves.length(); i++) {
            switch (moves[i]) {
                case 'U': up++; break;
                case 'D': up--; break;
                case 'R': right++; break;
                case 'L': right--; break;
            }
        }
        return up == 0 && right == 0;
    }
};
```
