class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2,
                              vector<int>& nums3) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        unordered_set<int> set3(nums3.begin(), nums3.end());

        vector<int> ans;
        unordered_map<int, int> mpp;

        for (int i : set1) {
            mpp[i]++;
        }
        for (int i : set2) {
            mpp[i]++;
        }
        for (int i : set3) {
            mpp[i]++;
        }

        for (auto it : mpp) {
            if (it.second > 1)
                ans.push_back(it.first);
        }
        return ans;
    }
};