class Solution {
    public int[] productExceptSelf(int[] nums) {
        // int n = nums.length
        int ans[] = new int[nums.length];
        int prodR = 1;
        int prodL = 1;

        for(int i = nums.length -1 ; i>=0; i--){ //right side(come from last)
            ans[i] = prodR;
            prodR = prodR * nums[i];
        }
        for(int i = 0; i<nums.length; i++ ){
            ans[i] = ans[i] * prodL;
            prodL = prodL * nums[i];
        }

        return ans;
    }
}  
