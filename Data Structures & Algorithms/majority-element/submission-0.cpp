class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int i;
        for(i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
      int  maxi=0;
        for(auto it:mp){
maxi=max(it.second,maxi);
        }
        for(auto st:mp){
            if(st.second==maxi){
                return st.first;
            }
        }
        return 0;
    }
};