class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int count1 = 0;

        for(int &num : nums){
            if(num < target)
                count1++;
        }
        vector<int> res;
        for(int &num : nums){
            if(num == target){
                res.push_back(count1);
                count1++;
            }
        }
        return res;
    }
};