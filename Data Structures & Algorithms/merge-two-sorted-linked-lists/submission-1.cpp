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

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {

//         if(head1 == NULL) return head2;
       
//         if(head2 == NULL) return head1;
        

//         if(head1-> val <= head2-> val){
//             head1->next= mergeTwoLists(head1->next, head2);
//             return head1;
//         } else {
//             head2->next= mergeTwoLists(head1, head2->next);
//             return head2;
//         }
        
//     }
// };




class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {

        // 🧩 Base case 1: if the first list is empty, return the second list
        if (head1 == NULL) return head2;

        // 🧩 Base case 2: if the second list is empty, return the first list
        if (head2 == NULL) return head1;

        // 🧠 Compare the current node values of both lists
        if (head1->val <= head2->val) {
            // If head1’s value is smaller or equal,
            // connect head1’s next to the result of merging the rest of head1 and head2
            head1->next = mergeTwoLists(head1->next, head2);  // recursive call
            return head1;  // Return head1 as the smaller (or equal) node
        } 
        else {
            // Otherwise, head2’s value is smaller
            // Connect head2’s next to the result of merging head1 and the rest of head2
            head2->next = mergeTwoLists(head1, head2->next);  // recursive call
            return head2;  // Return head2 as the smaller node
        }
    }
};

