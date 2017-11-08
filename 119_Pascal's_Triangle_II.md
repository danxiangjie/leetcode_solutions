Given an index k, return the kth row of the Pascal's triangle.

For example, given k = 3,
Return [1,3,3,1].

Note:
Could you optimize your algorithm to use only O(k) extra space?

#### C++

```cpp
class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<int> result(rowIndex+1, 1);
        for (int i = 1; i < rowIndex+1; i++) {
            int st = result[0];
            for (int j = 1; j < i; j++) {
                int tmp = result[j];
                result[j] += st;
                st = tmp;
            }
        }
        return result;
    }
};
```
