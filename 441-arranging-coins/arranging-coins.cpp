class Solution {
public:
    int arrangeCoins(int n) {
        int cnt = 0;
        if (n == 0)
            return 0;
        for (int i = 1; i <= n; i++) {
            if (n >= i) {
                n = n - i;
                cnt++;
            } else
                break;
        }
        return cnt;
    }
};