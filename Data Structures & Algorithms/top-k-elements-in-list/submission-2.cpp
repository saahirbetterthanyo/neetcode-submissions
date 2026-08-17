class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int i;
        
        for (i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        vector<pair<int, int>> freq;
        for(auto it:mp){
            freq.push_back({it.second,it.first});
        }
        sort(freq.begin(),freq.end());
        vector<int>ans;
        int n=freq.size();
        for(i=n-1;i>=n-k;i--){
            ans.push_back(freq[i].second);

        }
        return ans;
    
        
    }
};
