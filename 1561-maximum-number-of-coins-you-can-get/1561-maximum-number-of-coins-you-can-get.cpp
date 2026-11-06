class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());

        int n = piles.size();
        int count = n/3;
        int sum = 0;
        int i = n-2;

        while(count > 0){
            sum += piles[i];
            i -= 2;
            count--;
        }
        return sum;
    }
};