/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */ 
func isBalanced(root *TreeNode) bool {
    if root == nil {return true}
    
    left := depth(root.Left)
    right := depth(root.Right)
    
    return math.Abs(left - right) <= 1 && isBalanced(root.Left) && isBalanced(root.Right)
    
}

func depth(root *TreeNode) float64 {
    if root == nil {return 0}
    
    return math.Max(depth(root.Left), depth(root.Right)) + 1
}

 
