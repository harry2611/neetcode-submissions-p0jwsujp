public class Solution {
    public boolean hasDuplicate(int[] nums) {
        Set<Integer> Intset= new HashSet<>();
      for (int i = 0; i < nums.length; i++) {
        int num = nums[i];
      
        if (Intset.contains(num)){
        return true;
      }
      Intset.add(num);
      }
return false;
}
}

