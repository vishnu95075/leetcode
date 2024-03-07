class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string ans="";
        int i=0;
        while(word1.size()>i && word2.size()>i){
            ans+=word1[i];
            ans+=word2[i];
            i++;
        }

        if(word1.size()>word2.size()){
            while(word1.size()>i){
              ans+=word1[i];
              i++;      
            }
        }
        else{
            while(word2.size()>i){
              ans+=word2[i];
              i++;      
            }
        }
        
        
        return ans;
    }
};