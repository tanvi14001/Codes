class Solution {
public:
    int countOdds(int low, int high) {
        int cnt = 0;
        while(low<=high)
        {
            if(low%2!=0) cnt++;
            low++;
        }
        return cnt;
    }
};