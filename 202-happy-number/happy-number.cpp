class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        while (n != 1 && st.find(n) == st.end()) {
            st.insert(n);
            n = getnext(n);
        }
        return n == 1;
    }

private:
    int getnext(int n) {
        int total = 0;
        while (n > 0) {
            int digit = n % 10;
            total += digit * digit;
            n = n / 10;
        }
        return total;
    }
};