class Solution {
public:
    int squares(int n, vector<int>& dp){
        if(n == 0){
            return 0;
        }
        if(dp[n] != -1){
            return dp[n];
        }
        int count = INT_MAX;

        for(int i=1; i*i <= n; i++){
            int res = 1 + squares(n - i*i, dp);
            count = min(count, res);
        }
        return dp[n] = count;
    }
    int numSquares(int n) {
        vector<int> dp(n+1, -1);
        return squares(n, dp);
    }
};