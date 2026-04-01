public class Solution {
  public boolean hasDuplicate  ( int[] nums){
  Set<Integer> arr = new HashSet<>();
 // for(int i=0; i<nums.length; i++){  
  //  int num=nums[i];  OR 
  for(int num:nums){

  if(arr.contains(num)){
    return true;
  }
  arr.add(num);
  }
  return false;
  }
  }


