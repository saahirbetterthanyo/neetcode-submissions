class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> temp;
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            int s = i + 1;
            int l = n - 1;
            
            while (s < l) {
                int sum = nums[i] + nums[s] + nums[l];
                
                if (sum == 0) {
                    temp.push_back({nums[i], nums[s], nums[l]});
                    
                    s++;
                    l--;
                    
                    while (s < l && nums[s] == nums[s - 1]) {
                        s++;
                    }
                    
                    while (s < l && nums[l] == nums[l + 1]) {
                        l--;
                    }
                } 
                else if (sum > 0) {
                    l--;
                } 
                else {
                    s++;
                }
            }
        }
        
        return temp;
    }
};
