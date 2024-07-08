class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();

        for (int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        int ans = 0;

        for (auto a:mp) {
            if (a.second > n/2) {
                ans = a.first;
            }
        }
        return ans;
    }
};