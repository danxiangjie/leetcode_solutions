Reverse bits of a given 32 bits unsigned integer.

For example, given input 43261596 (represented in binary as 00000010100101000001111010011100), return 964176192 (represented in binary as 00111001011110000010100101000000).

Follow up:
If this function is called many times, how would you optimize it?

Related problem: Reverse Integer

#### Python

```python
class Solution:
    # @param n, an integer
    # @return an integer
    def reverseBits(self, n):
        bin_val = "{0:032b}".format(n)
        return int(bin_val[::-1], 2)
```
