class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0, rsum = 0, maxsum = 0;
        int n = cardPoints.size();
        for (int i = 0; i < k; i++) {
            lsum += cardPoints[i];
        }
        maxsum = lsum;
       
        for (int i = k - 1, rindex = n - 1; i >= 0; i--, rindex--) {
            lsum = lsum - cardPoints[i];
            rsum = rsum + cardPoints[rindex];
            maxsum = max(maxsum, lsum + rsum);
        }
        return maxsum;
    }
};