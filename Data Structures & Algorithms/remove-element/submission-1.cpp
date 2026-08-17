class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i,j=0;
        if(nums.size()==0){
            return 0;
        }
        for(i=0;i<nums.size();i++){
            if(nums[i]!=val){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return j;
      
        
    }
};