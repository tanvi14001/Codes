class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char, int> mpp;
        int ans = 0;
        for (int i = 0; i < allowed.size(); i++) {
            mpp[allowed[i]]++;
        }
        for (int i = 0; i < words.size(); i++) {
            bool check = true;
            for (int j = 0; j < words[i].size(); j++) {
                if (mpp.find(words[i][j]) == mpp.end()) {
                    check = false;
                    break;
                }
            }
            if (check == true)
                ans++;
        }
        return ans;
    }
};