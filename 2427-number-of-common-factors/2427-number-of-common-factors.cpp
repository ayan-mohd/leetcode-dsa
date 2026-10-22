class Solution {
public:
    int commonFactors(int a, int b) {
        int count = 0;
        int g = gcd(a, b);

        for(int i=1; i<=g; i++){
            if(g%i == 0){
                count++;
            }
        }
        return count;
    }
};