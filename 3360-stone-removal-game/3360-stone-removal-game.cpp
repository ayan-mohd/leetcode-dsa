class Solution {
public:
    bool canAliceWin(int n) {
        int stones = 10;
        int count = 0;

        while(n >= stones){
            n -= stones;
            stones--;
            count++;
        }   
        if(count % 2 != 0){
            return true;
        }
        return false;
    }
};