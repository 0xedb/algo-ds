/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function(nums) {
    let first = 0, second = 0
    
    nums.forEach(el => {
        if(el > first)
            second = first, first = el
        else
            second = Math.max(second, el)
    })
    
    return --first * --second
};
