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
    public ListNode addTwoNumbers(ListNode head1, ListNode head2) {
        int carry = 0;
        ListNode temp1 = head1;
        ListNode temp2 = head2;
        ListNode dummy = new ListNode();
        ListNode curr =  dummy;

        while( temp1 != null || temp2 != null){
            int sum = carry;
            if(temp1 != null){
                sum = sum + temp1.val;
                temp1 = temp1.next;
            }
            if(temp2 != null){
                sum = sum + temp2.val;
                temp2 = temp2.next;
            }

        
        curr.next = new ListNode(sum % 10);
        curr = curr.next;
        carry = sum/10;
        
        }
        
        if (carry > 0){
            curr.next = new ListNode (carry);
        }
        return dummy.next;
    }       
}

