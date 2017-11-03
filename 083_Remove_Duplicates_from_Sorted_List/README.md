Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.

链表去重

```cpp
/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return head;

        ListNode* st = head;
        ListNode* cur = head;
        while (cur->next) {
            cur = cur->next;
            if (cur->next == NULL)
                st->next = NULL;

            if (cur->val != st->val) {
                st->next = cur;
                st = st->next;
            }
        }
        return head;
    }
};
```
