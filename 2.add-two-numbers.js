/*
 * [2] Add Two Numbers
 *
 * https://leetcode.com/problems/add-two-numbers
 *
 * Medium (27.56%)
 * Total Accepted:    
 * Total Submissions: 
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * You are given two non-empty linked lists representing two non-negative
 * integers. The digits are stored in reverse order and each of their nodes
 * contain a single digit. Add the two numbers and return it as a linked list.
 * 
 * You may assume the two numbers do not contain any leading zero, except the
 * number 0 itself.
 * 
 * 
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
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
var addTwoNumbers = function(l1, l2) {
    var sumNode, p = new ListNode(0);
    sumNode = p;
    var carry = 0;
    while(l1 || l2 || carry !== 0) {
        if (l1) {
            carry += l1.val;
            l1 = l1.next;
        }
        if (l2) {
            carry += l2.val;
            l2 = l2.next;
        }
        p.next = new ListNode(carry % 10);
        carry = parseInt(carry / 10);
        p = p.next;
    }
    return sumNode.next;
};


// Runtime: 228ms
