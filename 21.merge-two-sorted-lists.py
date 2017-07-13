#
# [21] Merge Two Sorted Lists
#
# https://leetcode.com/problems/merge-two-sorted-lists
#
# Easy (38.96%)
# Total Accepted:    
# Total Submissions: 
# Testcase Example:  '[]\n[]'
#
# Merge two sorted linked lists and return it as a new list. The new list
# should be made by splicing together the nodes of the first two lists.
#
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

# 思路：
# 申请一个新的链表，遍历两个链表并进行对比，把小的加到新的链表里面
# 最后将剩下的元素加到链表中

class Solution(object):
    def mergeTwoLists(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        p = ListNode(0)
        sorted_list = p
        while l1 and l2:
            if l1.val < l2.val:
                p.next = ListNode(l1.val)
                p = p.next
                l1 = l1.next
            else:
                p.next = ListNode(l2.val)
                p = p.next
                l2 = l2.next
        if l1:
            p.next = l1
        else:
            p.next = l2
        return sorted_list.next
        
