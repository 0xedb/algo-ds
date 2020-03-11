/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func reverseList(head *ListNode) *ListNode {
    var prev *ListNode
    var current *ListNode
    
    for head != nil {
        current = head;
        head = head.Next;
        current.Next = prev;
        prev = current;
    }
    
    return current;
}

 