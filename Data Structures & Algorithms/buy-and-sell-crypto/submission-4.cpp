class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b=prices[0];
        int maxprofit=0;
        
       for(int i=0;i<prices.size();i++)
       {
        b = min(prices[i],b);
        maxprofit=max(maxprofit,prices[i]-b);
       }

        //no need for last if check since maxprofit is already 0 . refactored
       return maxprofit;
    }
};
