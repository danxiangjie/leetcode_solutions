/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    var roman_int = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        };
    var sum_int = 0;
    for (var i = 0; i < s.length - 1; i++) {
        if (roman_int[s[i]] < roman_int[s[i+1]])
            sum_int -= roman_int[s[i]];
        else
            sum_int += roman_int[s[i]];
    }
    return sum_int + roman_int[s[s.length - 1]];
};

// Runtime: 218ms