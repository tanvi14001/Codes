class Solution {
public:
    int averageValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0 && nums[i] % 3 == 0)
                ans.push_back(nums[i]);
        }
        int sum = 0;

        for (int i = 0; i < ans.size(); i++) {
            sum += ans[i];
        }
        if (ans.size() > 0)
            return sum / ans.size();
        else
            return 0;
    }
};