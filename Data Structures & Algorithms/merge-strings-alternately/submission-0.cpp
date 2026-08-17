class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size()+word2.size();
        string word3={};
        int i=0;
        while(i<word1.size() || i<word2.size()){
            
            if(i<word1.size()){
                word3.push_back(word1[i]);
            }
            
            if(i<word2.size()){
                word3.push_back(word2[i]);
            }
            
            i++;
            
            
        }
        return word3;
        
    }
};