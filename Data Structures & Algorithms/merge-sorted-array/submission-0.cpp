class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j;
       
        for(j=0;j<nums2.size();j++){
        nums1[m++]=nums2[j];
        }
        
       
       sort(nums1.begin(),nums1.end());
    }
    };

