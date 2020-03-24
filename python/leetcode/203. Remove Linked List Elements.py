# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution:
    def removeElements(self, head: ListNode, val: int) -> ListNode:
        if head is None:
            return head
        nxt = self.removeElements(head.next, val)
        if head.val == val:
            head = nxt
        else:
            head.next = nxt

        return head
