class Solution {
public:
    int fxn(int i, int j, vector<int>& cuts, vector<vector<int>>& dp){
        if(i+1 == j){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int m = INT_MAX;

        for(int k=i+1; k<j; k++){
            int cost = fxn(i, k, cuts, dp) + fxn(k, j, cuts, dp) + cuts[j] - cuts[i];

            m = min(m, cost);
        }
        return dp[i][j] = m;
    }
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(0);
        cuts.push_back(n);

        sort(cuts.begin(), cuts.end());
        int s = cuts.size();
        
        vector<vector<int>> dp(s, vector<int>(s, -1));
        return fxn(0, s-1, cuts, dp);
    }
};