/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumProduct = function (nums) {
  nums = nums.sort((a, b) => a - b);
  console.log(nums);
  const sz = nums.length;

  const first = nums[0] * nums[1] * nums[sz - 1];
  const second = nums[sz - 3] * nums[sz - 2] * nums[sz - 1];

  return Math.max(first, second);
};

// O(n) better remember to use Infinity
/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumProduct = function(nums) {
    let min1 = Infinity
    let min2 = min1
    
    let max1 = -Infinity
    let max2 = max1
    let max3 = max1
    
    for(let i of nums) {
        if(i <= min1) {
            min2 = min1
            min1 = i
        } else if(i <= min2)
            min2 = i
        
        if(i >= max1) {
            max3 = max2
            max2 = max1
            max1 = i
        } else if(i >= max2) {
            max3 = max2
            max2 = i
        } else if(i >= max3)
            max3 = i
    }
    
    return Math.max(max1 * max2 * max3, min1 * min2 * max1)
}; 