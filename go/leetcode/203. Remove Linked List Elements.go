/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func removeElements(head *ListNode, val int) *ListNode {
    if head == nil {return head}
    
    nxt := removeElements(head.Next, val)
    if head.Val == val {
        head = nxt
    } else {
        head.Next = nxt
    }
    return head
}
  