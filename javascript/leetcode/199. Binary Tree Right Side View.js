/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var rightSideView = function(root) {
    const ans = []
    
    if(!root) return ans
    
    let q = [root]
    
    while(q.length) {
        const sz = q.length
        
        for(let i = 0; i < sz; ++i) {
            const front = q[0]
            
            if(front.left)
                q.push(front.left)
            
            if(front.right)
                q.push(front.right)
            
            if(i === sz - 1)
                ans.push(q[0].val)
            
            q = q.slice(1)
        }
    }
    
    return ans
};
