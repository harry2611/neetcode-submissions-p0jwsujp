class Solution {
    public boolean checkInclusion(String s1, String s2) {
        int freq []= new int[26];

        for(int i = 0; i< s1.length();i++){
            freq[s1.charAt(i) - 'a']++;
        }
        int windsize = s1.length();

        for(int i = 0; i<s2.length(); i++){
            int winfreq[] = new int[26];
            int winidx = 0; int idx =i;

            while(winidx < windsize && idx < s2.length()){
                winfreq[s2.charAt(idx)-'a']++;
                winidx++; idx++;
            }

            if(isSame(freq, winfreq)){
                return true;
            }
        }
            return false;
            }
        
    public boolean isSame(int freq1[], int freq2[]){
            for (int i=0; i<25; i++){
                if(freq1[i] != freq2[i]){
                    return false;
                }
                
            }
            return true;
        }

    }

