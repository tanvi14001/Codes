class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string, int> mpp;
        int cnt = 0;
        for (auto c : words1) {
            if (mpp[c] == 0)
                mpp[c] = 1;
            else if (mpp[c] == 1)
                mpp[c] = -1;
        }
        for (auto c : words2) {
            if (mpp[c] == 1)
                mpp[c] = 2;
            else if (mpp[c] == 2)
                mpp[c] = -1;
        }
        for (auto it : mpp) {
            if (it.second == 2)
                cnt++;
        }
        return cnt;
    }
};