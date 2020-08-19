/**
 * @param {string} S
 * @return {string}
 */
var toGoatLatin = function(S) {
    const vowels = new Set("aeiouAEIOU");
    
    const words = S.split(" ")
    let ans = new Array()
    
    words.forEach((el, ind) => {
        let temp = ""
        if(!vowels.has(el[0])) {
            const first = el[0] 
            temp += Array.from(el).splice(1).join("") + first                      
        } else 
            temp += el   
        
        temp += "ma"
        
        for(let i = 0; i <= ind; ++i) 
            temp += 'a'
        
        
        ans.push(temp)
    })
    
    return ans.join(" ")
};
