/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function(s) {
    const map = new Map(); 
    
    for(let chr of s) {
        
        if(map.has(chr)) {
            map.set(chr, map.get(chr) + 1)
            continue
        }
        
        map.set(chr, 1)
    } 
    
    for(let i = 0; i < s.length; i++) {
        if(map.get(s[i]) === 1) return i;
    }
    
    return -1;
};