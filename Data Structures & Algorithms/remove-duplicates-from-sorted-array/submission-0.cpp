class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>temp;
        temp.push_back(nums[0]);
        int i;
        for(i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                temp.push_back(nums[i]);
            }
        }
        for(i=0;i<temp.size();i++){
            nums[i]=temp[i];
        }
        return temp.size();
        
    }
};