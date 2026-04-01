class Solution {
    public int longestConsecutive(int[] nums) {
     Set<Integer> s = new HashSet<>();
     int ans = 0; int j;
     for (int i = 0; i<nums.length; i++){
        s.add(nums[i]);
     }
        for(int i = 0; i<nums.length; i++){
            if (!s.contains(nums[i]-1)){
                j=nums[i];

                while(s.contains(j)){
                    j++;
            }
                    if(ans<j-nums[i]){
                        ans=j-nums[i];
                    }
                
            }
        }
       return ans;
    }
}
