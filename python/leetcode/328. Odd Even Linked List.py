# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution:
    def oddEvenList(self, head: ListNode) -> ListNode:
        if head is None or head.next is None:
            return head
        start = 1
        nav = head
        odd_start = ListNode(0)
        odd_end = odd_start
        even_start = ListNode(0)
        even_end = even_start

        while nav:
            if start % 2 == 0:
                even_end.next = nav
                nav = nav.next
                even_end = even_end.next
                even_end.next = None
                start += 1
            else:
                odd_end.next = nav
                nav = nav.next
                odd_end = odd_end.next
                odd_end.next = None
                start += 1

        odd_end.next = even_start.next
        return odd_start.next
