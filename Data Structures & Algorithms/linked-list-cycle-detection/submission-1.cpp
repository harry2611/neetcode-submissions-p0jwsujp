/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;

        while(fast != NULL && fast-> next != NULL){ // fast != NULL for even number of nodes &
                                                    //   fast-> next != NULL for odd number of nodes

            slow = slow->next; // inc slow by 1
            fast = fast->next->next; // inc fast by 2

            if(slow == fast)  
            return true; // has cycle
        }
        return false; //no cycle return false
    }
};
