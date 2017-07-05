class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        roman = {
            1: 'I',
            5: 'V',
            10: 'X',
            50: 'L',
            100: 'C',
            500: 'D',
            1000: 'M'
        }
        i = 1;
        arr = []
        while num != 0:
            k = num % 10
            if k > 0 and k < 4:
                arr.append(roman[i]*k)     
            elif k == 4:
                arr.append(roman[i] + roman[5*i])
            elif k >= 5 and k < 9:
                arr.append(roman[5*i] + roman[i]*(k-5))
            elif k == 9:
                arr.append(roman[i] + roman[i*10])
            num //= 10
            i *= 10
        return ''.join(arr[::-1])


# Runtime: 108ms