class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> mpp;
        for (auto i : nums) {
            mpp[i]++;
        }
        for (auto it : mpp) {
            if (it.second >= 2)
                return true;
        }
        return false;
    }
};