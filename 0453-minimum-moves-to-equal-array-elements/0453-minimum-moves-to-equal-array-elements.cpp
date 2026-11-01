class Solution {
public:
    int minMoves(vector<int>& nums) {
        int element = nums[0];

        for(int i=1; i<nums.size(); i++){
            if(nums[i] < element){
                element = nums[i];
            }
        }
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            count += nums[i] - element;
        }
        return count;
    }
};