class Solution {
public:
    int rev(int n) {
        int x = 0;
        while (n > 0) {
            int t = n % 10;
            x = x * 10 + t;
            n = n / 10;
        }
        return x;
    }
    bool isSameAfterReversals(int num) {
        int rev1 = rev(num);
        int rev2 = rev(rev1);
        return rev2 == num;
    }
};