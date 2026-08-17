class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n=nums.size();
        vector<int>prefix(n,1);
        vector<int>suffix(n,1);
        int i;
        prefix[0]=1;
        for(i=1;i<nums.size();i++){
            prefix[i]*=nums[i-1]*prefix[i-1];
        }
        suffix[n-1]=1;
        for(i=n-2;i>=0;i--){
            suffix[i]*=nums[i+1]*suffix[i+1];
        }
        for(i=0;i<nums.size();i++){
            nums[i]=prefix[i]*suffix[i];
        }
        return nums;

    }
};
