/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func deleteDuplicates(head *ListNode) *ListNode {
    if head == nil || head.Next == nil{return head}
    
    slow := head;
    fast := slow.Next;
    slow.Next = nil;
    
    for fast != nil {
        if fast.Val != slow.Val {
            slow.Next = fast;
            slow = fast;
            fast = fast.Next;
            slow.Next = nil;
            continue;
        }
        fast = fast.Next;
    }
    
    return head;
}