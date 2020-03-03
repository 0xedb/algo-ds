/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDuplicates = function(nums) {
  let ans = [];
  nums.forEach(val => {
    val = Math.abs(val);
    let value = nums[val - 1];
    if (value < 0) { 
      ans.push(val);
    } else {
      nums[val - 1] = -value;
    }
  });
  console.log(nums);
  return ans;
};






  
