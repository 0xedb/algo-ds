/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func mergeTwoLists(l1 *ListNode, l2 *ListNode) *ListNode {
    finalList := new(ListNode)
    currentList := finalList
    
    
    for l1 != nil && l2 != nil {
        if l1.Val < l2.Val {
            currentList.Next = l1
            l1 = l1.Next            
        } else {
            currentList.Next = l2
            l2 = l2.Next
        }
        currentList = currentList.Next
    } 
    if l1 != nil {
        currentList.Next = l1
        l1 = l1.Next 
    }
    if l2 != nil {
        currentList.Next = l2
        l2 = l2.Next
    }
     
    return finalList.Next
}