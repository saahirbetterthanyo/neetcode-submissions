class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        vector<int>ans;
        for(i=0;i<2*n;i++){
            ans.push_back(nums[i%n]);

        }
        return ans;
        
    }
};