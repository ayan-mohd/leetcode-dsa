class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            long long prod = 1;
            long long gc = 0;
            long long lc = 1;

            for (int j = i; j < n; j++) {
                gc = gcd(gc, (long long)nums[j]);
                long long g = gcd(lc, (long long)nums[j]);
                lc = (lc / g) * nums[j];
                if (prod > (gc * lc) / nums[j]) {
                    break;
                }
                prod *= nums[j];

                if (prod == gc * lc) {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};