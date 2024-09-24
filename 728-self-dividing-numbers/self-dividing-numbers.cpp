class Solution {
public:
    int selfdivide(int n) {
        int x = n;
        while (n > 0) {
            if (n % 10 == 0)
                return -1;
            else {
                if (x % (n % 10) == 0)
                    n /= 10;
                else
                    return -1;
            }
        }
            return 1;
        }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            if (selfdivide(i) == 1)
                ans.push_back(i);
        }
        return ans;
    }
    
};