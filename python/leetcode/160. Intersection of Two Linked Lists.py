# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution:
    def getIntersectionNode(self, headA: ListNode,
                            headB: ListNode) -> ListNode:
        if headA is None or headB is None:
            return None

        first = headA
        second = headB

        while first != second:
            first = first.next
            second = second.next

            if first == second:
                return first

            if not first:
                first = headB
            if not second:
                second = headA
        return first
