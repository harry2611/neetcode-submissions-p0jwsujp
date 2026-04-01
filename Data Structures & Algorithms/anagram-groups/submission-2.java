class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap <String, List<String>> ans = new HashMap<>();
        for (int i = 0; i <strs.length ; i++){
            char[] ch= strs[i].toCharArray();
            Arrays.sort(ch);
            String key = new String(ch);

            if (!ans.containsKey(key)) {
                ans.put(key, new ArrayList());

            }
            ans.get(key).add(strs[i]);

        }
        return new ArrayList(ans.values());

    //     for (int i = 0; i < strs.length; i++) {
    //     char[] ch = strs[i].toCharArray();
    //     Arrays.sort(ch);
    //     String key = new String(ch);
    //     if (!ans.containsKey(key)) {
    //         ans.put(key, new ArrayList<>());
    //     }

    //     ans.get(key).add(strs[i]);
    // }

    // return new ArrayList<>(ans.values());
    }
}
