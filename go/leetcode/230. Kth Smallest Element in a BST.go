/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func kthSmallest(root *TreeNode, k int) int {     
    kth := k 
    res := 0
    small(root, &res, &kth)
    return res
}

func small(root *TreeNode, res, kth *int) {
    if root == nil || *kth == 0 {
        return
    }
    
    small(root.Left, res, kth)
    *kth--
    if *kth == 0 {
        *res = root.Val
    } else {
        small(root.Right, res, kth)
    }
}