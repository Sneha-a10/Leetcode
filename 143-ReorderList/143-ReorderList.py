# Last updated: 9/16/2025, 12:53:04 AM
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:

    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        def rev(head:Optional[ListNode]) ->Optional[ListNode]:
            if not head or not head.next :
                return head
            t = rev(head.next)
            head.next.next = head
            head.next = None
            return t

        fast = head
        slow = head
        while(fast and fast.next):
            fast = fast.next.next
            slow = slow.next

        headrev = rev(slow.next)
        slow.next = None
        temp = head
        
        while(headrev):
            fast = head.next
            slow = headrev.next
            head.next = headrev
            headrev.next = fast
            head = fast
            headrev = slow
        
        return temp



        

        
        
        
        