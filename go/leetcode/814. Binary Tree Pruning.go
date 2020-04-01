/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func pruneTree(root *TreeNode) *TreeNode {
    if root == nil{return nil}
    
    root.Right = pruneTree(root.Right)
    root.Left = pruneTree(root.Left)
    
    if root.Val != 1 && root.Left == nil && root.Right == nil {return nil}
    
    return root    
}