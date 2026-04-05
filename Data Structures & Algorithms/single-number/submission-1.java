class Solution {
    public int singleNumber(int[] nums) {
        int ans = 0;
        for (int i = 0; i< nums.length; i++){
            int num = nums[i];
            ans = ans ^ num;
        }
        return ans;
    }
}
