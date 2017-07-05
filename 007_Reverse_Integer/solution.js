/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    var flag = x < 0 ? -1 : 1;
    x *= flag;
        
    var result = 0;
    while (x !== 0) {
        var k = x % 10;
        result = result * 10 + k;
        if (result >= Math.pow(2, 31))
            return 0;
        x = parseInt(x / 10);
    }
    return flag * result;
};

// Runtime: 159ms