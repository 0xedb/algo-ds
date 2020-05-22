/**
 * @param {number[]} widths
 * @param {string} S
 * @return {number[]}
 */
var numberOfLines = function(widths, S) {
    let ans = 1, line = 0
    
    const base = 'a'.charCodeAt(0);
    
    for(let i = 0; i < S.length; ++i) {
        const w = widths[S.charCodeAt(i) - base];
        ans = line + w > 100 ? ans + 1 : ans
        line = line + w > 100 ? w : line + w
    }
    
    return [ans, line]
};
 
