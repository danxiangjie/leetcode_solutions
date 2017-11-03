Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

#### 思路：

申请一个新的链表，遍历两个链表并进行对比，把小的加到新的链表里面

最后将剩下的元素加到链表中


#### Python

```python
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

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
```

#### Java

```java
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode sortedList, p = new ListNode(0);
        sortedList = p;
        while(l1 != null && l2 != null) {
            if (l1.val < l2.val) {
                p.next = new ListNode(l1.val);
                l1 = l1.next;
            } else {
                p.next = new ListNode(l2.val);
                l2 = l2.next;
            }
            p = p.next;
        }
        p.next = (l1 != null) ? l1 : l2;
        return sortedList.next;
    }
}
```

#### JS

```javascript
/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var mergeTwoLists = function(l1, l2) {
    var p = new ListNode(0);
    var sortedList = p;
    while (l1 && l2) {
        if (l1.val < l2.val) {
            p.next = new ListNode(l1.val);
            l1 = l1.next;
            p = p.next;
        } else {
            p.next = new ListNode(l2.val);
            l2 = l2.next;
            p = p.next;
        }
    }
    p.next = l1 ? l1 : l2;
    return sortedList.next;
};
```
