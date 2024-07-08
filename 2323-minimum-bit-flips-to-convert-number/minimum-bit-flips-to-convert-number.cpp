class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt = 0;
        int num = start ^ goal;
        for (int i = 0; i < 31; i++) {
            if ((num & (1 << i)) != 0)
                cnt++;
        }
        return cnt;
    }
};