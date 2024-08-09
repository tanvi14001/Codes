class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int ans = 0, maxi = 0;
        for (auto it : nums) {
            maxi = max(maxi, it);
        }
        while (k) {
            ans += maxi;
            maxi++;
            k--;
        }
        return ans;
    }
};