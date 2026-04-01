/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

class Solution {
    public ListNode reverseList(ListNode head) {
           ListNode prev = null;
        ListNode curr = head;
        
        while (curr != null) {
            ListNode nextNode = curr.next;  // store next node
            curr.next = prev;               // reverse the link
            prev = curr;                    // move prev to current
            curr = nextNode;                // move current to next
        }
        
        return prev;  // new head of reversed list
    }
}
    