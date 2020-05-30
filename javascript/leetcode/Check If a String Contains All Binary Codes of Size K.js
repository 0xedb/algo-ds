/**
 * @param {string} s
 * @param {number} k
 * @return {boolean}
 */
var hasAllCodes = function(s, k) {
    const limit = 2 ** k;
    const nums = new Set();
    
    let n = [];
    
    for(let i = 0; i < k; ++i)
        n.push(s[i]); 
    
    nums.add(parseInt(n.join(""), 2))
    
    while(k < s.length) {
        n = n.splice(1)
        n.push(s[k]) 
        nums.add(parseInt(n.join(""), 2)) 
        ++k
    } 
    
    
    for(let i = 0; i < limit; ++i)
        if(!nums.has(i))
            return false
        
    return true
};
