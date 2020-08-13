/**
 * @param {number} rowIndex
 * @return {number[]}
 */
var getRow = function(rowIndex) {
    let first = [1]
    let second = [1, 1]
        if(rowIndex === 0) return first
        if(rowIndex === 1) return second
    
    for(let i = 2; i <= rowIndex; i++) {
        let start = 0;
        let third = [1] 
        third[i] = 1
        for(let j = 1; j < i; j++) {
            third[j] = second[start] + second[++start] 
        }  
        first = second
        second = third
    }
    
    return second
};


