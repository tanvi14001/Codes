class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        if (num < 10)
            return num;
        while (num >= 10) {

            sum = (num / 10) + (num % 10);
            num = sum;
        }
        return sum;
    }
};