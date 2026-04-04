class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int start = 1;
        int end = piles[0];
        for (int i = 1; i < piles.length; i++) {
          end = Math.max(end, piles[i]);
}

        while(start<end){
            int mid = start+ (end - start)/2;

            int time =0;
            for(int x=0; x<piles.length; x++){
                if(piles[x] <= mid) time++;
                else time+=(piles[x] + mid -1 )/mid; //ceil 
            }
            if (time > h){
                start = mid + 1;

            } 
            else end = mid;
        }
        return start;
    }
}
