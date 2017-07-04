/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    var m = new Map();
    for ( i = 0; i < nums.length; i++) {
        if (m.has(target - nums[i])) {
            return [m.get(target - nums[i]), i];
        }
        m.set(nums[i], i);
    }
    return [];
};



// Runtime: 152 ms