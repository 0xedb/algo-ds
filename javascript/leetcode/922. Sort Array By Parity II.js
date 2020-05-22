/**
 * @param {number[]} A
 * @return {number[]}
 */
var sortArrayByParityII = function(A) {
    let odd = 1
    
    for(let i = 0; i < A.length; i += 2) { 
        if(A[i] % 2 !== 0) {
            while(A[odd] % 2 !== 0) 
                odd += 2
            
            const temp = A[i]
            A[i] = A[odd]
            A[odd] = temp 
        } 
    }
    
    return A
}; 
