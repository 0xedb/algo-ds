/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func rangeSumBST(root *TreeNode, L int, R int) int {
    if !root {return 0}
    sum := 0
    
    if root.Val >= L && root.Val <= R {sum += root.Val}
    if root.Val > L {sum += rangeSumBST(root.Left, L, R)}
    if root.Val < R {sum += rangeSumBST(root.Right, L, R)}
    
    return sum
}