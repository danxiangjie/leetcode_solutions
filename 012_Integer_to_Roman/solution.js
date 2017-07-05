/**
 * @param {number} num
 * @return {string}
 */
var intToRoman = function(num) {
    var roman = {
        1: 'I',
        5: 'V',
        10: 'X',
        50: 'L',
        100: 'C',
        500: 'D',
        1000: 'M'
    }
    var i = 1;
    var cnt = 0;
    var arr = []
    while (num !== 0) {
        var k = num % 10;
        if (k > 0 && k < 4) {
            var cur = '';
            while(k--)
                cur += roman[i];
            arr.push(cur);
        } else if (k == 4) {
            arr.push(roman[i] + roman[5*i]);
        } else if (k >= 5 && k < 9) {
            cur = roman[5*i];
            for (var j = 0; j < k - 5; j++)
                cur += roman[i];
            arr.push(cur);
        }else if (k == 9) {
            arr.push(roman[i] + roman[i*10]);
        }
        num = parseInt(num / 10);
        i *= 10;
    }
    var ans = '';
    for (var x = arr.length - 1; x >= 0; x--)
        ans += arr[x];
    return ans;
};

// Runtime: 239ms