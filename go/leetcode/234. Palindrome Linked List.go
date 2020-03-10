/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func isPalindrome(head *ListNode) bool {
    if head == nil {return true}
    
    late := head
    early := head.Next
    var prev *ListNode 
    
    for early != nil {
        if early.Next != nil {
            early = early.Next.Next
        } else {early = nil}
        late = late.Next
    }
    
    cur := new(ListNode)
    mid := late 
    late = nil
    
    for mid != nil {
        cur = mid
        mid = mid.Next
        cur.Next = prev
        prev = cur
    }
    
    for cur != nil {
        if head.Val != cur.Val {return false}
        head = head.Next
        cur = cur.Next
    }
    
    return true
}   