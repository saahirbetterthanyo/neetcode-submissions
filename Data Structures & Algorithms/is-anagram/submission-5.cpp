class Solution {
public:
    bool isAnagram(string s, string t) {
        char count1[26]={0};
        char count2[26]={0};
        int i;
        for(i=0;i<s.size();i++){
            tolower(s[i]);
            count1[s[i]-'a']++;
        }
        for(i=0;i<t.size();i++){
            tolower(t[i]);
            count2[t[i]-'a']++;
        }
        for(i=0;i<26;i++){
            if(count1[i]!=count2[i]){
                return false;
            }
        }
        return true;
        
    }
};
