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
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         if( head == NULL || head->next == NULL || left == right) return head;

//         ListNode *curr = head;
//         ListNode *prev = NULL;
//         int i=1;
//         // while(curr != NULL && i != left){
//             while(i< left){ 
//             prev=curr;
//             curr = curr->next;
//             i++;

//         }
//         ListNode *pointerToStart = prev;
//         ListNode *start = curr;
//         prev = NULL;
        
//         // while(curr != NULL && i != right +1){
//             while(i <= right){
//             ListNode *next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//             i++;
//         }
//         start ->next = curr;  //in my eg its 5
//         if(pointerToStart != NULL){
//             pointerToStart -> next = prev;
        

//         }else {
//             return prev; // if index is 0 then prev becomes new head

//         }
//         return head;

//     }
// };

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL || head->next == NULL || left == right)
            return head;

        ListNode* curr = head;
        ListNode* prev = NULL;
        int i = 1;

        // Step 1: Move curr to 'left' position
        while (i < left) {
            prev = curr;
            curr = curr->next;
            i++;
        }

        // Step 2: Mark the pointers
        ListNode* pointerToStart = prev; // node before the reversal segment
        ListNode* start = curr;          // first node of the segment
        prev = NULL;

        // Step 3: Reverse from left to right
        while (i <= right) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            i++;
        }

        // Step 4: Reconnect the reversed part
        start->next = curr;  // connect end of reversed part to remaining list
        if (pointerToStart != NULL) {
            pointerToStart->next = prev; // connect previous part to reversed section
        } else {
            // left == 1 → new head is the start of reversed segment
            head = prev;
        }

        return head;
    }
};
