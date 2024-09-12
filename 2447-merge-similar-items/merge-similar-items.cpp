class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1,
                                          vector<vector<int>>& items2) {
        map<int, int> mpp;
        for (auto val : items1) {
            mpp[val[0]] += val[1];
        }
        for (auto val : items2) {
            mpp[val[0]] += val[1];
        }

        vector<vector<int>> ans;
        for (auto [a, b] : mpp) {
            ans.push_back({a, b});
        }
        return ans;
    }
};