class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());
        vector<int> ans(st.begin(), st.end());

        if (ans.size() < 3)
            return ans.back();
        else
            return ans[ans.size() - 3];
    }
};