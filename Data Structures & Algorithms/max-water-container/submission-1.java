class Solution {
    public int maxArea(int[] heights) {
        int maxWater = 0;
        int lp= 0;
        int rp = heights.length - 1;

        while(lp<rp){
            int wid = rp - lp;
            int height = Math.min(heights[lp], heights[rp]);
            int currWater = wid * height;
            maxWater = Math.max(maxWater, currWater);

           

            if(heights[lp]< heights[rp]){
                lp++;
            }else{
            rp--; 
            }

             
        }
        return maxWater;
    }
}
