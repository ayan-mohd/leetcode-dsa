class Solution {
public:
    int dp[5001][2];
    int stock(vector<int>& prices, int day, int n, bool buy, vector<vector<int>>& dp){
        if(day >= n){
            return 0;
        }
        if (dp[day][buy] != -1){
            return dp[day][buy];
        }
        int profit = 0;
        if(buy){
            int pick = stock(prices, day+1, n, false, dp) - prices[day];
            int notPick = stock(prices, day+1, n, true, dp); 
            profit = max({profit, pick, notPick});
        }
        else{
            int sell = prices[day] + stock(prices, day+2, n, true, dp);
            int notSell = stock(prices, day+1, n, false, dp);
            profit = max({profit, sell, notSell});
        }
        return dp[day][buy] = profit;
    }
    int maxProfit(vector<int>& prices) {
         int n = prices.size();

         vector<vector<int>> dp(n, vector<int>(2, -1));

         bool buy = true;
         return stock(prices, 0, n, buy, dp);
    }
};