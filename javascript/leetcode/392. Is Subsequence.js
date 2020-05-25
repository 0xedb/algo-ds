/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isSubsequence = function(s, t) {
    let j = 0
    
    for(let i of s) {
        while(j < t.length && t[j] !== i)
            ++j
        
        if(j === t.length) return false
        ++j
    }
    
    return true;
};
 
