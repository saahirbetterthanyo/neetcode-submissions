class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s=prices.size();
        int i;
        int profit=0;
        for(i=1;i<s;i++){
            if(prices[i]>prices[i-1]){
                profit+=prices[i]-prices[i-1];
            }
        }
        return profit;
        
    }
};