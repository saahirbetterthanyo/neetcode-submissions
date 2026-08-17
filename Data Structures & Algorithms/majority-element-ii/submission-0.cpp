class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n=nums.size();
        int i;
        vector<int>ans;
        unordered_map<int,int>mp;
        for(i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(i=0;i<n;i++){
            if(mp[nums[i]]>(int)(n/3)){
               ans.push_back(nums[i]);
               mp[nums[i]]=-1;
            }
        }
        return ans;
        
    }
};