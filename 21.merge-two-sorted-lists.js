/*
 * [21] Merge Two Sorted Lists
 *
 * https://leetcode.com/problems/merge-two-sorted-lists
 *
 * Easy (38.96%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '[]\n[]'
 *
 * Merge two sorted linked lists and return it as a new list. The new list
 * should be made by splicing together the nodes of the first two lists.
 */
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

 /* 思路：
 * 申请一个新的链表，遍历两个链表并进行对比，把小的加到新的链表里面
 * 最后将剩下的元素加到链表中
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
