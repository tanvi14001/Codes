class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        for (int c : nums1) {
            mpp[c]++;
        }
        for (int c : nums2) {
            if (mpp[c] > 0) {
                ans.push_back(c);
                mpp[c]--;
            }
        }
        return ans;
    }
};