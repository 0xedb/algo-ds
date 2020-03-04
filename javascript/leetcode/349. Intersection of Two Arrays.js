/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {
  let st = new Set();
  let which = nums1.length > nums2.length ? nums1 : nums2;
  let other = nums1.length > nums2.length ? nums2 : nums1;

  which.forEach(el => {
    st.add(el);
  });

  let ans = [];
  other.forEach(el => {
    if (st.has(el)) {
      ans.push(el);
      st.delete(el);
    }
  });
  return ans;
};
