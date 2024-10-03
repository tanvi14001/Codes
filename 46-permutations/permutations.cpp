class Solution {
public:
    void func(int ind, vector<vector<int>>& ans, vector<int>& nums) {
        int n = nums.size();
        if (ind == n) {
            ans.push_back(nums);
            return;
        }
        for (int i = ind; i < n; i++) {
            swap(nums[ind], nums[i]);
            func(ind + 1, ans, nums);
            swap(nums[ind], nums[i]); // reswap to original array
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        func(0, ans, nums);
        return ans;
    }
};