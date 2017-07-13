# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

# 链表操作，从左加到右，注意进位。

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        p = ListNode(0)
        sum_node = p
        carry = 0
        while l1 or l2 or carry != 0:
            if l1:
                carry += l1.val
                l1 = l1.next
            if l2:
                carry += l2.val
                l2 = l2.next
            p.next = ListNode(carry % 10)
            carry //= 10
            p = p.next
        return sum_node.next
        

# Runtime: 138ms