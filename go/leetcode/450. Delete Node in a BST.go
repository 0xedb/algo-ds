/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func deleteNode(root *TreeNode, key int) *TreeNode {
    if root == nil{return nil}
    
    if key > root.Val {
        root.Right = deleteNode(root.Right, key)
    } else if key < root.Val {
        root.Left = deleteNode(root.Left, key)
    } else {
        if root.Left == nil && root.Right == nil {
            root = nil
        } else if root.Left != nil && root.Right != nil {
            min := small(root.Right)
            root.Val = min.Val
            root.Right = deleteNode(root.Right, root.Val)
        } else {
            if root.Right == nil {
                root = root.Left
            } else {
                root = root.Right
            }
        }
    }
    
    return root
}

func small(root *TreeNode) *TreeNode {
    for root.Left != nil {root = root. Left}
    return root
}

