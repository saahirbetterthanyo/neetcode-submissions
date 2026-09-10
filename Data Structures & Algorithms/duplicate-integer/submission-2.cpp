class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int i=0;
        for(i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(i=0;i<nums.size();i++){
            if(mp[nums[i]]>1){
                return true;
            }
        }
        return false;
        
    }
};