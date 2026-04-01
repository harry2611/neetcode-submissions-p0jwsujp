class Solution {
    public int findDuplicate(int[] nums) {
        Set <Integer> present = new HashSet<>();

        for (int i=0; i<nums.length; i++){
            int num = nums[i];
            if(present.contains(num)){
                return num;
            }
            present.add(num);

        }
        return 1;
    }
}
