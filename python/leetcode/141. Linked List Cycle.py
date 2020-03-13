# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution:
    def hasCycle(self, head: ListNode) -> bool:
        if head is None:
            return False
        fast = head.next

        while fast:
            if fast == head:
                return True
            fast = fast.next.next if fast.next else None
            head = head.next
        return False
