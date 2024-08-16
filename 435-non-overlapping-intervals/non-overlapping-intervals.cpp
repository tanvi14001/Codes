class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<pair<int, int>> v;
        int n=intervals.size();
        for (int i = 0; i < intervals.size(); i++) {
            v.push_back({intervals[i][1], intervals[i][0]});
        }
        sort(v.begin(), v.end());
        int cnt = 1, endtime = v[0].first;
        for (int i = 1; i < intervals.size(); i++) {
            if (v[i].second >= endtime) {
                cnt++;
                endtime = v[i].first;
            }
        }
        return n-cnt;
    }
};