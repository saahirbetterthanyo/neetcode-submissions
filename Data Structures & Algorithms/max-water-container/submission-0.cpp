class Solution {
public:
    int maxArea(vector<int>& heights) {
    int s=0,l=heights.size()-1;
    int max_area=INT_MIN;
    while(s<l){
       int area=min(heights[s],heights[l])*(l-s);
        max_area=max(area,max_area);
        if(heights[s]<heights[l]){
            s++;
        }
        else{
            l--;
        }
         
    }
    return max_area;
    }
};
