/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func oddEvenList(head *ListNode) *ListNode {
    if head == nil || head.Next == nil {return head}
    start := 1
    nav := head
    odd_start := &ListNode{0, nil}
    odd_end := odd_start
    even_start := &ListNode{9, nil}
    even_end := even_start 
    
    for nav != nil {
        if start % 2 == 0 {
            // even
            even_end.Next = nav
            nav = nav.Next
            even_end = even_end.Next
            even_end.Next = nil
            start++ 
            
        } else {
            // odd
            odd_end.Next = nav
            nav = nav.Next
            odd_end = odd_end.Next
            odd_end.Next = nil
            start++
        }
    } 
        
    odd_end.Next = even_start.Next
    return odd_start.Next
}