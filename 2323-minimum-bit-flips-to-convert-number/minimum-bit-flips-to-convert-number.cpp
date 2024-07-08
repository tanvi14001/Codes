class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt = 0;
        int num = start ^ goal;
        while (num) {
            cnt += num & 1;
            num = num >> 1;
        }
        return cnt;
    }
};