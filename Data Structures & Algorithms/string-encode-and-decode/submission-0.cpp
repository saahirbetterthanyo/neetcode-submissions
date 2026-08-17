class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
      for (string s : strs) {
            ans += to_string(s.size()) + "#" + s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>result;
        string st;
        int hashpos,len,i=0;
        while(i<s.size()){
            hashpos=s.find('#',i);
           len = stoi(s.substr(i, hashpos - i));
            st=s.substr(hashpos+1,len);
            result.push_back(st);
            i=hashpos+1+len;

            
        }
        return result;

    }
};

