class Solution {
public:
    void func(int ind, int target, vector<int>& ds, vector<vector<int>>& ans,
              vector<int>& nums) {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }
        for (int i = ind; i < nums.size(); i++) {
            if (i > ind && nums[i] == nums[i - 1])
                continue;
            if (nums[i] > target)
                break;
            ds.push_back(nums[i]);
            func(i + 1, target - nums[i], ds, ans, nums);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>ds;
        vector<vector<int>> ans;
        func(0, target, ds, ans, candidates);
        return ans;
    }
};