class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        bool state[101] = {false};
        
        for(int bulb : bulbs){
            state[bulb] = !state[bulb];
        }

        vector<int> result;

        for(int i=1; i<=100; i++){
            if(state[i]){
                result.push_back(i);
            }
        }
        return result;
    }
};