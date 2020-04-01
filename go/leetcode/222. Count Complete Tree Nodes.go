/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func countNodes(root *TreeNode) int {
    return count(root, 0)
}

func count(root *TreeNode, c int) int {
    if root == nil {
        return 0
    } else {
        c += 1
    }
    
    c += count(root.Right, 0)
    c += count(root.Left, 0)
    
    return c
}