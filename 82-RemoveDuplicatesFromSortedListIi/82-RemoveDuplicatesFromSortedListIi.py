# Last updated: 9/16/2025, 12:53:13 AM
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
            return head

        fast = head
        slow = ListNode(0)
        slow.next = head
        d = slow
        while(fast):
            if (fast.next and fast.val == fast.next.val):
                t = fast.val
                while(fast and fast.val == t):
                    fast = fast.next
                slow.next = fast
            else:
                slow = slow.next
                fast = fast.next

        return d.next    