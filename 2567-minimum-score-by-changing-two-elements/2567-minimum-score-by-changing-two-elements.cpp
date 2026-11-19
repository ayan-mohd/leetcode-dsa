class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int h1 = nums[n-2] - nums[1];
        int h2 = nums[n-3] - nums[0];
        int h3 = nums[n-1] - nums[2];

        return min({h1, h2, h3});
    }
};