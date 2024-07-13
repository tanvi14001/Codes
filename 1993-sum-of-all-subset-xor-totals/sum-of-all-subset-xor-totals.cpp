class Solution {
public:
    int subset(int index, vector<int>& nums, int val) {
        if (index == nums.size())
            return val;
        int include = subset(index + 1, nums, val ^ nums[index]);
        int exclude = subset(index + 1, nums, val);
        return include + exclude;
    }
    int subsetXORSum(vector<int>& nums) { return subset(0, nums, 0); }
};