# Last updated: 9/16/2025, 12:52:30 AM
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution(object):
    def middleNode(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        len = 1
        temp = head
        while(temp.next!= None):
            len += 1
            temp = temp.next
        
        len = (len//2)+1 
        while(len>1):
            len -= 1
            head = head.next
        
        return head
        