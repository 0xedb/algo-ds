/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    const sz = nums.length
    
    let zero = 0, two = sz - 1, i = 0
    
    while(i <= two && zero < two) {
        if(nums[i] === 0) {
            nums[i] = nums[zero]
            nums[zero] = 0
            ++zero
            ++i
        } else if(nums[i] === 2) {
            nums[i] = nums[two]
            nums[two] = 2
            --two
        } else
            ++i
    }
}; 
