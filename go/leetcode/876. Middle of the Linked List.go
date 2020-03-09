/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func middleNode(head *ListNode) *ListNode {
    late := head
    early := head.Next
    
    for early != nil {
        early = early.Next
        if early != nil {
            early = early.Next
        } else {early = nil}
        late = late.Next
    }
    
    
    return late
}