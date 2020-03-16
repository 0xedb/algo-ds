/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func swapPairs(head *ListNode) *ListNode {
    if head == nil {return nil}
    if head.Next == nil {return head}
    
    cur := head.Next
    head.Next = cur.Next
    cur.Next = head
    head = cur
    
    head.Next.Next = swapPairs(head.Next.Next)
    return head
}