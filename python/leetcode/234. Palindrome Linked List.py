# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution:
    def isPalindrome(self, head: ListNode) -> bool:
        if head is None:
            return True

        late = head
        early = head.next
        prev = None

        while early:
            early = early.next.next if early.next else None
            late = late.next

        cur = None
        mid = late
        late = None

        while mid:
            cur = mid
            mid = mid.next
            cur.next = prev
            prev = cur

        while cur:
            if head.val != cur.val:
                return False
            head = head.next
            cur = cur.next

        return True
