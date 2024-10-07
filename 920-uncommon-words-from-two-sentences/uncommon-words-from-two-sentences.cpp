class Solution {
public:
    map<string, int> mpp;
    void stringsttream(string s) {
        stringstream ss(s);
        string word;
        while (ss >> word)
            mpp[word]++;
    }
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        stringsttream(s1);
        stringsttream(s2);
        for (auto it : mpp) {
            if (it.second == 1)
                ans.push_back(it.first);
        }
        return ans;
    }
};