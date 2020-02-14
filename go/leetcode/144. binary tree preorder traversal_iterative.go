/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func preorderTraversal(root *TreeNode) []int {
    arr := []int {}
  
    if root == nil {
        return arr;
    }
    
    stack := []*TreeNode{}
    stack = append(stack, root)
    
    for len(stack) > 0 {
        top := stack[ len(stack) - 1 ]
        arr = append(arr, top.Val)
        stack = stack[ :len(stack) - 1 ]
        
        fmt.Println(top.Val)
        
        if top.Right != nil {
            stack = append(stack, top.Right)
        } 
        if top.Left != nil {
            stack = append(stack, top.Left)
        }
    }
    return arr;
}