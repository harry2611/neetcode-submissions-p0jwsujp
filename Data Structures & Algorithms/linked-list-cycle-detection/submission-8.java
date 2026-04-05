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
    public boolean hasCycle(ListNode head) {
        ListNode fast = head;
        ListNode slow = head;

        while( fast != null && fast.next != null){
            fast = fast.next.next; // don pointer ne inc
            slow = slow.next; // ek pointer ne inc

            if(/*fast != null && */slow == fast) return true;

        }
        return false;
    }
}
