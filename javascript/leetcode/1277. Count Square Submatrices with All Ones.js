/**
 * @param {number[][]} matrix
 * @return {number}
 */
var countSquares = function(matrix) {
    let ans = 0;
        for (let i = 0; i < matrix.length; ++i)
            for (let j = 0; j < matrix[0].length; ans += matrix[i][j++])
                if (matrix[i][j] && i && j)
                    matrix[i][j] += Math.min(...[matrix[i - 1][j - 1], matrix[i - 1][j], matrix[i][j - 1]]);
        return ans;     
};
