/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func hasCycle(head *ListNode) bool {
    if head == nil {return false}
    fast := head.Next
    
    for fast != nil {
        if fast == head {return true} 
        if fast.Next != nil {
            fast = fast.Next.Next
        } else {
            fast = nil
        }
        head = head.Next        
    }
        
    return false
}
  