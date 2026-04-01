class Solution {
    public int[] topKFrequent(int[] nums, int k) {
    
        Map<Integer, Integer> freqmap = new HashMap<>();
        
        List<Integer>[] bucket = new List[nums.length + 1];

        for (int n : nums) {
            freqmap.put(n, freqmap.getOrDefault(n, 0) + 1);
        }

        for (int key : freqmap.keySet()) {
            int freq = freqmap.get(key);
            if (bucket[freq] == null) {
                bucket[freq] = new ArrayList<>();
            }
            bucket[freq].add(key);
        }

        // Step 3: Collect top k frequent elements
        int[] res = new int[k];
        int counter = 0;

        for (int pos = bucket.length - 1; pos >= 0 && counter < k; pos--) {
            if (bucket[pos] != null) {
                for (Integer Integer : bucket[pos]) {
                    res[counter++] = Integer;
                    //if (counter == k) break;
                }
            }
        }

        return res;
    }
}

