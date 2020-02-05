/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func partition(head *ListNode, x int) *ListNode {
    left_head := new(ListNode)
    right_head := new(ListNode)
    left := left_head
    right :=  right_head
    
    for head != nil {
        if(head.Val < x){
            left.Next = head
            left = left.Next
        } else {
            right.Next = head
            right = right.Next
        }
        head = head.Next
    }
    
    right.Next = nil
    
    left.Next = right_head.Next
    
    return left_head.Next
    
    
}