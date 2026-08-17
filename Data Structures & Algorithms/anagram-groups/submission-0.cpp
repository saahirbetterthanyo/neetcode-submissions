class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>mp;
       int i;
       string word,key;
       for(i=0;i<strs.size();i++){
        word=strs[i];
        key=word;
        sort(key.begin(),key.end());
        mp[key].push_back(word);
        

       }
       vector<vector<string>>ans;
       for(auto it=mp.begin();it!=mp.end();it++){
        ans.push_back(it->second);
       }
       return ans;


        }
        
    };

