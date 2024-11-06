class Solution {
public:
    void func(int ind, int target, vector<int>& ds, vector<vector<int>>& ans,
              vector<int>& nums, int n) {
        if (ind == n) {
            if (target == 0) {
                ans.push_back(ds);
            }
            return;
        }
        if (nums[ind] <= target) {
            ds.push_back(nums[ind]);
            func(ind, target - nums[ind], ds, ans, nums, n);
            ds.pop_back();
        }
        func(ind + 1, target, ds, ans, nums, n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> ds;
        vector<vector<int>> ans;
        func(0, target, ds, ans, candidates, n);
        return ans;
    }
};