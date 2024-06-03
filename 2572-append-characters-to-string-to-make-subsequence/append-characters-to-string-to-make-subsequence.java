class Solution {
    public int appendCharacters(String s, String t) {
        int sn=s.length();
        int tn=t.length();

        int i=0;
        int cnt=0;
        int j=0;
        int p=0;
        while(i<tn){
            while(j<sn && i<tn){
                if(s.charAt(j)==t.charAt(i)){
                    i++;
                    cnt++;
                }
                j++;
            }
            i++;
        }

        return tn-cnt;
    }
}