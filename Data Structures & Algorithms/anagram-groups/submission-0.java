class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
       
        Map<String, List<String>> hmap= new HashMap<>();
        for(String s: strs){
            char ch[]= s.toCharArray();
            Arrays.sort(ch);
            String key= String.valueOf(ch);
            if (!hmap.containsKey(key)) {
                hmap.put(key, new ArrayList<>());
            }

            
            hmap.get(key).add(s);
        
            
            
        }
        return new ArrayList<>(hmap.values());

    }
}
