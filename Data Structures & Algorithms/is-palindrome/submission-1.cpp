class Solution {
public:
    bool isPalindrome(string s) {
        int st=0,l=s.size()-1;
        while(st<l){
             if(!isalnum(s[st])){
                st++;
                continue;
             }
             if(!isalnum(s[l])){
                l--;
                continue;
             }
             
             if(tolower(s[st])!=tolower(s[l])){
                return false;
             }
             st++;
             l--;


        }
        return true;
        
    }
};
