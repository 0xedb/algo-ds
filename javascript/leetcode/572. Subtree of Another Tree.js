/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} s
 * @param {TreeNode} t
 * @return {boolean}
 */
var isSubtree = function(s, t) {
    if(!s) return false
    if(isSameTree(s,t)) return true
    
    return isSubtree(s.left, t) || isSubtree(s.right, t)
};

function isSameTree(s, t) {
    if(!s || !t) return s === t
    
    if(s.val !== t.val) return false
    
    return isSameTree(s.left, t.left) && isSameTree(s.right, t.right)
}
 
    
