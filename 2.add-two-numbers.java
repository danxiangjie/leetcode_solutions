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
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */

// 链表操作，从左加到右，注意进位。

public class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode sumNode, p = new ListNode(0);
        sumNode = p;
        int carry = 0;
        while(l1 != null || l2 != null || carry != 0) {
            if (l1 != null) {
                carry += l1.val;
                l1 = l1.next;
            }
            if (l2 != null) {
                carry += l2.val;
                l2 = l2.next;
            }
            p.next = new ListNode(carry%10);
            carry /= 10;
            p = p.next;
        }
        return sumNode.next;
    }
}


// Runtime: 55ms
