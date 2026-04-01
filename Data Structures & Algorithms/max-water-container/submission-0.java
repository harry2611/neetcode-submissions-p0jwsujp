class Solution {
    public int maxArea(int[] heights) {
        
        int Maxwater=0;
        int lp=0; int rp= heights.length-1;

        while(lp<rp){
            int width=rp-lp;
            int height=Math.min(heights[lp], heights[rp]);
            int waterpresent= width * height;

            Maxwater= Math.max(Maxwater,waterpresent);

            if(heights[lp]<heights[rp]){
                lp++;}
            else{
                rp--;
            }
        }
        return Maxwater;
    
    }
}
