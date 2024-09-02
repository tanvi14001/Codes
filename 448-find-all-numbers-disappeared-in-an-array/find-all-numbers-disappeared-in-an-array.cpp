class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        vector<int> ans;
        for (int i = 1; i <= nums.size(); i++) {
            if (!s.count(i))
                ans.push_back(i);
        }
        return ans;
    }
};