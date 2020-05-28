/**
 * @param {number} num
 * @return {number[]}
 */
var countBits = function(num) {
    const ans = []
    
    const count_bits = (num) => {
        let count = 0
        
        while(num && ++count)
            num &= num - 1;
        
        return count;
    }
    
    for(let i = 0; i <= num; ++i)
        ans.push(count_bits(i))
    
    return ans;
};
