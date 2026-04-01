class Solution {
    public int longestConsecutive(int[] nums) {
     Set<Integer> s = new HashSet<>();
     int ans = 0; int j; int longest = 0;
     for (int i = 0; i<nums.length; i++){
        s.add(nums[i]);
     }
        //for(int i = 0; i<nums.length; i++){
        for(int num : s){
            if (!s.contains(num-1)){
                j=num;

                while(s.contains(j)){
                    j++;
            }
                    // if(ans<j-num){
                    //     ans=j-num;
                    // }
                    longest = Math.max(longest,j-num);
                
            }
        }
    //    return ans;
    return longest;
    }
}
