class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int m = INT_MAX;

        for(int i=0; i<nums.size(); i+=2){
            int a = nums[i];
            int b = nums[i+1];

            int digit = to_string(b).length();
            int merge = a*(int)pow(10, digit) + b;

            m = min(m, merge);
        }
        return m;
    }
};