class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mpp;
        vector<int> arr1;
        for (auto it : arr) {
            mpp[it]++;
        }
        for (auto it : mpp) {
            arr1.push_back(it.second);
        }
        sort(arr1.begin(),arr1.end());
        for (int i = 0; i < arr1.size() - 1; i++) {
            if (arr1[i] == arr1[i + 1])
                return false;
        }
        return true;
    }
};