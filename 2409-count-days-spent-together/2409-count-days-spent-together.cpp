class Solution {
public:
    int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int convert(string date){
        int month = stoi(date.substr(0, 2));
        int d = stoi(date.substr(3, 2));
        int total = d;

        for(int i=0; i<month-1; i++){
            total += day[i];
        }
        return total;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int A = convert(arriveAlice);
        int B = convert(leaveAlice);
        int C = convert(arriveBob);
        int D = convert(leaveBob);

        int start = max(A, C);
        int end = min(B, D);

        return max(0, end - start + 1);
    }
};