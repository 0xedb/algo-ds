/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func insertIntoBST(root *TreeNode, val int) *TreeNode {
    cur := root
    
    for cur != nil {
        if val > cur.Val {
            if cur.Right == nil {
                cur.Right = new(TreeNode)
                cur.Right.Val = val
                return root
            }
            cur = cur.Right
        }
        
        if val < cur.Val {
            if cur.Left == nil {
                cur.Left = new (TreeNode)
                cur.Left.Val = val
                return root
            }
            cur = cur.Left
        }
    }
    
    return root
}


// with pointer literal and slower
/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func insertIntoBST(root *TreeNode, val int) *TreeNode {
    cur := root
    
    for cur != nil {
        if val > cur.Val {
            if cur.Right == nil {
                cur.Right = &TreeNode{val, nil, nil}
                return root
            }
            cur = cur.Right
        }
        
        if val < cur.Val {
            if cur.Left == nil {
                cur.Left = &TreeNode{val, nil, nil}
                return root
            }
            cur = cur.Left
        }
    }
    
    return root
}