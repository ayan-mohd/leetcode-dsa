class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int val = INT_MIN;
        int sum = 0;

        for(int i=0; i<n; i++){
            val = max(val, nums[i]);
            sum += nums[i];
        }
        return (n*val) - sum;
    }
};