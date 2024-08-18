class Solution {
public:
    string toLowerCase(string s) {
        string ans;
        for (auto it : s) {
            ans += tolower(it);
        }
        return ans;
    }
};