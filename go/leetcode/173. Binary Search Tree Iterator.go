/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
type BSTIterator struct {
    sorted []int
    pos int
}
 

func Constructor(root *TreeNode) BSTIterator {
    bst := BSTIterator{[]int{}, 0}
    bst.inorder(root)     
    return bst
}


/** @return the next smallest number */
func (this *BSTIterator) Next() int {
    val := this.sorted[this.pos]
    this.pos++
    return val
}


/** @return whether we have a next smallest number */
func (this *BSTIterator) HasNext() bool {
    return this.pos < len(this.sorted)
}

func (bst *BSTIterator) inorder(root *TreeNode) {
    if root == nil {
        return 
    }
    
    bst.inorder(root.Left)
    bst.sorted = append(bst.sorted, root.Val)
    bst.inorder(root.Right)
}


/**
 * Your BSTIterator object will be instantiated and called as such:
 * obj := Constructor(root);
 * param_1 := obj.Next();
 * param_2 := obj.HasNext();
 */