class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int op = 0;

        for(int i=0; i<n; i++){
            int mid = nums[n/2];
            op += abs(nums[i] - mid);
        }
        return op;
    }
};