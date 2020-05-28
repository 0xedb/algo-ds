/**
 * @param {number[]} nums
 * @return {number}
 */
var minStartValue = function(nums) {
    let total = 0, min_total = 0;
    
    for(let i of nums) {
        total += i;
        min_total = Math.min(min_total, total)
    }
    
    return 1 - min_total
};
