class Solution {
public:
    int fxn(vector<int>& nums, int i, int p, vector<vector<int>>& dp){
        int n = nums.size();
        if(i >= n){
            return 0;
        }

        if(dp[i][p+1] != -1){
            return dp[i][p+1];
        }

        int pick = 0;
        if(p == -1 || nums[p] < nums[i]){
            pick = 1 + fxn(nums, i+1, i, dp);
        }
        int notPick = fxn(nums, i+1, p, dp);

        return dp[i][p+1] = max(pick, notPick);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
        return fxn(nums, 0, -1, dp);
        
    }
};