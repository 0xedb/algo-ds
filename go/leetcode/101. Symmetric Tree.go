/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func isSymmetric(root *TreeNode) bool {
    if root == nil {return true}
    return check2(root.Left, root.Right)
}

func check2(left, right *TreeNode)  bool {
    if left == nil && right == nil {return true}
    if left == nil || right == nil {return false}
    return left.Val == right.Val && 
    check2(left.Right, right.Left) &&
    check2(left.Left, right.Right)
} 
 