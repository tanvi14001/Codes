class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int cnt=numBottles;
        int remaining=0;
        while(numBottles>=numExchange)
        {
            cnt+=numBottles/numExchange;
            remaining=(numBottles/numExchange) + (numBottles%numExchange);
            numBottles=remaining;
        }
        return cnt;
    }
};