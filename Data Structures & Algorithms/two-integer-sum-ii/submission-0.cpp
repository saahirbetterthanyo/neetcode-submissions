class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st=0,l=numbers.size()-1;
        vector<int>temp;
        while(st<l){
            if((numbers[st]+numbers[l])==target){
                temp.push_back(st+1);
                temp.push_back(l+1);
                return temp;
            }
            else if((numbers[st]+numbers[l])>target){
                l--;
            }
            else{
                st++;
            }
        }
        return {};
        
    }
};
