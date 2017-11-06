Reverse a singly linked list.

click to show more hints.

Hint:
A linked list can be reversed either iteratively or recursively. Could you implement both?

迭代：

```python
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        p = head
        rev = None
        while p:
            rev, rev.next, p = p, rev, p.next
        return rev
```

上面这个操作看似很简洁但是要懂其门道

拆开来写法：

```python
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        p = head
        rev = None

        while p:
            tmp = rev
            rev = p
            p = p.next
            rev.next = tmp
        return rev
```

递归，思路和上面一样：

```python
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        def revRecurse(p, prev=None):
            if not p:
                return prev
            tmp = p.next
            p.next = prev
            return revRecurse(tmp, p)
        return revRecurse(head)
```
