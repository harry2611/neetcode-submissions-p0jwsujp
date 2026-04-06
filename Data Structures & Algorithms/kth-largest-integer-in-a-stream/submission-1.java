class KthLargest {
    int size;
    PriorityQueue<Integer> pq = new PriorityQueue<>();


    public KthLargest(int k, int[] nums) {
        size = k;
        
        for(int i = 0; i< nums.length; i++){
            // pq.add(nums[i]);
            // if(pq.size()>k){
            //     pq.poll();
            if(pq.size() < k) pq.add(nums[i]);
                else if(nums[i] > pq.peek()) {
                 pq.poll();
                 pq.add(nums[i]); 
  }
            }
        }

        
    
    
    public int add(int val) {
        pq.add(val);
        if(pq.size()> size){
            pq.poll();
            
        }
        return pq.peek();
    }
}
