class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        if (num < 10)
            return num;
        while (num >= 10) {
            int a = num / 10;
            int b = num % 10;
            sum = a + b;
            num = sum;
        }
        return sum;
    }
};