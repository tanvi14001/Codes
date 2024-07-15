class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0, j = n - 1;
        double mini = INT_MAX;
        while (i < j) {
            mini = min(mini, double(nums[i] + nums[j]) / 2);
            i++;
            j--;
        }
        return mini;
    }
};