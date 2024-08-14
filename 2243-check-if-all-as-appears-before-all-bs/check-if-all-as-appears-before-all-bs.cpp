class Solution {
public:
    bool checkString(string s) {
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'b')
                cnt++;
            if (cnt > 0 && s[i] == 'a')
                return false;
        }
        return true;
    }
};