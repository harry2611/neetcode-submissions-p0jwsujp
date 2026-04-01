public class Solution {
    public boolean hasDuplicate(int[] n) {
        for (int i = 0; i < n.length; i++) {
            for (int j = i + 1; j < n.length; j++) {
                if (n[i] == n[j]) {
                    return true;
                }
            }
        }
        return false;
    }
}


