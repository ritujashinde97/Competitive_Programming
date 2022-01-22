class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit =0;
        int min_p ;
        for(int i = 0; i<prices.size();i++){
            min_p = min(min_p, prices[i]);
            profit = max(profit,prices[i]-min_p);
        }
       return profit;
    }
};
