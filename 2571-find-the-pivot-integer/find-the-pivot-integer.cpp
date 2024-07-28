class Solution {
public:
    int getsum(int n) { return n * (n + 1) / 2; }
    int pivotInteger(int n) {
        int sum = getsum(n);

        int l = 1;
        int r = n;
        while (l <= r) {
            int m = (l + r) / 2;
            int first = getsum(m);
            int second = sum - first + m;

            if (first == second)
                return m;
            else if (first > second)
                r = m - 1;
            else
                l = m + 1;
        }
        return -1;
    }
};