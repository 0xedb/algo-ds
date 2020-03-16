# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        if head is None or head.next is None:
            return head

        slow = head
        fast = slow.next
        slow.next = None

        while fast:
            if fast.val != slow.val:
                slow.next = fast
                slow = fast
                fast = fast.next
                slow.next = None
            else:
                fast = fast.next

        return head
