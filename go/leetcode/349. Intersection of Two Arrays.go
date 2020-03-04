func intersection(nums1 []int, nums2 []int) []int {
    set := map[int]int{}
    which := []int{}
    other := which
    if len(nums1) > len(nums2) {
        which = nums1
        other = nums2
    } else {
        which = nums2
        other = nums1
    }
    
    for i := 0; i < len(which); i++ {
        set[which[i]] = 0
    }
    
    ans := []int{}
    
    for i := 0; i < len(other); i++ {
        _, ok := set[other[i]]
        if ok {
            ans = append(ans, other[i])
            delete(set, other[i])
        }
    }
    
    return ans
}