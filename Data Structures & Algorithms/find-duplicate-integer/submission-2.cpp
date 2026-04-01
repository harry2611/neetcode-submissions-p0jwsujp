// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//        int slow = nums[0];
//        int fast = nums[0];

//        slow = nums[slow];
//        fast = nums[nums[fast]];


//        while(slow != fast){
//         slow = nums[slow];
//         fast = nums[nums[fast]];

//        } 
//        slow = nums[0];

//        while(slow != fast){

//         slow= nums[slow];
//         fast=nums[fast];


//        }
//        return slow;
//     }
// };


class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // Here we're using Floyd's Tortoise and Hare (Cycle Detection) algorithm
        // The idea is to treat the array like a linked list:
        // Each index points to the value at that index (nums[i]).
        // Since there’s one duplicate, it means one “node” points to an already visited value, forming a cycle.

        int slow = nums[0];   // Initialize both slow and fast pointers to the first element.
        int fast = nums[0];

        // Move the pointers once before entering the loop to start detecting the cycle.
        slow = nums[slow];        // Move slow pointer by one step.
        fast = nums[nums[fast]];  // Move fast pointer by two steps.

        // Phase 1: Detect if a cycle exists.
        // We’ll keep moving both pointers until they meet, which confirms there’s a cycle.
        while (slow != fast) {
            slow = nums[slow];        // Slow moves one step.
            fast = nums[nums[fast]];  // Fast moves two steps.
        }

        // Phase 2: Find the entry point of the cycle.
        // The entry point of the cycle corresponds to the duplicate number.

        slow = nums[0];  // Reset slow pointer back to the start of the array.

        // Now move both pointers one step at a time.
        // The point where they meet again will be the duplicate number.
        while (slow != fast) {
            slow = nums[slow];   // Move slow by one step.
            fast = nums[fast];   // Move fast by one step.
        }

        // Return the meeting point — that’s the duplicate number.
        return slow;
    }
};

