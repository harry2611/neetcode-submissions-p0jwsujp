class Solution {
    public boolean hasDuplicate(int[] nums) {
          Set<Integer> st= new HashSet<>();

        //   for(int i = 0; i<nums.length; i++){
        //     int num = nums[i];
        for(int num : nums){

            if(st.contains(num)){
                return true;
            }
            st.add(num);

        }
        return false;
    }
}