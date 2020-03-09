# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution:
    def middleNode(self, head: ListNode) -> ListNode:
        late = head
        early = head.next

        while early:
            early = early.next.next if early.next else None
            late = late.next

        return late
