/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if (x < 0 || (x > 0 && x % 10 === 0))
        return false;
    var x_s = x.toString().split("");
    for (var i = 0; i <= x_s.length / 2; i++) {
        if (x_s[i] !== x_s[x_s.length - i - 1])
            return false;
    }
    return true;
};


// Runtime: 345ms