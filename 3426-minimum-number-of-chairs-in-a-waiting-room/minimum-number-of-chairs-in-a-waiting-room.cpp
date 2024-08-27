class Solution {
public:
    int minimumChairs(string s) {
        int cnt = 0, ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'E')
                cnt += 1;
            else
                cnt -= 1;
            ans = max(ans, cnt);
        }
        return ans;
    }
};