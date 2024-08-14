class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> mpp;
        for (int num : nums1) {
            mpp[num]++;
        }
        for (int num : nums2) {
            if (mpp[num] > 0) {
                ans.push_back(num);
                mpp[num] = 0;
            }
        }
        return ans;
    }
};