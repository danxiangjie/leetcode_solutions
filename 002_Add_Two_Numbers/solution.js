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