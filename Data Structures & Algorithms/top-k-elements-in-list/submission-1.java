class Solution {
    public int[] topKFrequent(int[] nums, int k) {
       HashMap<Integer, Integer> mapp = new HashMap<>();
        for(int i = 0; i<nums.length; i++){
            int num = nums[i];
            mapp.put(num, mapp.getOrDefault(num,0)+1);
        }

    //     PriorityQueue<Map.Entry<Integer,Integer>> heap =
    // new PriorityQueue<>((a, b) -> Integer.compare(a.getValue(), b.getValue()));
    PriorityQueue<Map.Entry<Integer,Integer>> heap =
    new PriorityQueue<>((a, b) -> a.getValue() - b.getValue());

        for (Map.Entry<Integer,Integer> entry : mapp.entrySet()) {
            heap.offer(entry);
            if (heap.size() > k) {
            heap.poll();   // pop smallest freq
        }
        }
           int[] res = new int[k];
        for (int i = 0; i < k; i++) {
            res[i] = heap.poll().getKey();  // order doesn't matter
        }
        return res;
    }
}
