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


// Runtime: 145ms