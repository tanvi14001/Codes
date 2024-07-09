class Solution {
public:
    int hammingWeight(int n) {
        int cnt = 0;
        while (n > 1) {
            if (n % 2 == 1)
                cnt += 1;
            n = n / 2;
        }
        if (n == 1)
            cnt += 1;
        return cnt;
    }
};