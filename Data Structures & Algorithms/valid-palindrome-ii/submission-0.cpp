bool is_palindrome(const string& s, int st, int l) {
        while (st < l) {
            if (s[st] != s[l]) return false;
            st++;
            l--;
        }
        return true;
    }
class Solution {
public:
    bool validPalindrome(string s) {
        int st=0,l=s.size()-1;
        while(st<l){
            
            if(s[st]!=s[l]){
                return (is_palindrome(s,st+1,l)||is_palindrome(s,st,l-1));

            }
            st++;
            l--;
        }
        return true;
        
    }
};