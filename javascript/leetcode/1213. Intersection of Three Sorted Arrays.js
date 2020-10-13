/**
 * @param {number[]} arr1
 * @param {number[]} arr2
 * @param {number[]} arr3
 * @return {number[]}
 */
var arraysIntersection = function(arr1, arr2, arr3) {
    let ans = new Array()
    
    const first = new Set(arr1)
    const second = new Set(arr2)
    const third = new Set(arr3)
    
    for(const i of arr1) 
        if(first.has(i) && second.has(i) && third.has(i))
            ans.push(i)
    
    ans.sort((a, b) => a - b)
    
    return ans
}; 
