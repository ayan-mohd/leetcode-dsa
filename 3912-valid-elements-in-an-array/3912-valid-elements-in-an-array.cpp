class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<int> suffixMax(n);
        suffixMax[n-1] = nums[n-1];

        for(int i=n-2; i>=0; i--){
            suffixMax[i] = max(nums[i], suffixMax[i+1]);
        }
        int leftMax = INT_MIN;

        for(int i=0; i<n; i++){
            if(i==0 || i == n-1 || nums[i] > leftMax || nums[i] > suffixMax[i+1]){
                ans.push_back(nums[i]);
            }
            leftMax = max(leftMax, nums[i]);
        }
        return ans;
    }
};