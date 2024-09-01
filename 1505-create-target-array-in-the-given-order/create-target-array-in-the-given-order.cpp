class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> target;
        for (int i = 0; i < n; i++) {
            stack<pair<int, int>> st;
            st.push(make_pair(nums[i], index[i]));

            while (!st.empty()) {
                int num = st.top().first;
                int idx = st.top().second;
                st.pop();
                if (idx < target.size()) {
                    target.insert(target.begin() + idx, num);
                } else {
                    target.push_back(num);
                }
            }
        }
        return target;
    }
};