# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
        if head is None:
            return None
        if head.next is None:
            return head

        cur = head.next
        head.next = cur.next
        cur.next = head
        head = cur

        head.next.next = self.swapPairs(head.next.next)
        return head
