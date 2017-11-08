Given a list of 24-hour clock time points in "Hour:Minutes" format, find the minimum minutes difference between any two time points in the list.

Example 1:

```
Input: ["23:59","00:00"]
Output: 1
```

Note:

1. The number of time points in the given list is at least 2 and won't exceed 20000.
2. The input time is legal and ranges from 00:00 to 23:59.

#### Python

```python
class Solution(object):
    def findMinDifference(self, timePoints):
        """
        :type timePoints: List[str]
        :rtype: int
        """

        timePoints = sorted(int(t[:2]) * 60 + int(t[-2:]) for t in timePoints)
        timePoints.append(24*60 + timePoints[0])

        return min(b - a for a, b in zip(timePoints, timePoints[1:]))
```
