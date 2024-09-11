class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());
        vector<int> ans;

        for (auto it : st)
            ans.push_back(it);

        if (ans.size() == 1)
            return ans[0];

        if (ans.size() == 2) {
            sort(ans.begin(), ans.end());
            return ans[1];
        }

        if (ans.size() >= 3)
            return ans[ans.size() - 3];

        return ans[ans.size()];
    }
};