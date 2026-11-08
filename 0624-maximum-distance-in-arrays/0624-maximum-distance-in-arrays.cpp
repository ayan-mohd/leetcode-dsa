class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int mn = arrays[0][0];
        int mx = arrays[0].back();

        int res = 0;

        for(int i=1; i<arrays.size(); i++){
            int curr = arrays[i][0];
            int currMx = arrays[i].back();

            res = max(res, max(mx - curr, currMx - mn));
    
            mn = min(mn, curr);
            mx = max(mx, currMx);
        }
        return res;
    }
};