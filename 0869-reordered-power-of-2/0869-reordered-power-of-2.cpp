class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<int> freq(10, 0);

        while(n>0){
            int digit = n%10;
            freq[digit]++;
            n = n/10;
        }
        for(int i=1; i<=1e9; i*=2){
            int num = i;
            vector<int> temp(10, 0);

            while(num > 0){
                int digit = num % 10;
                temp[digit]++;
                num = num/10;
            }
            if(freq == temp){
                return true;
            }
        }
        return false;
    }
};