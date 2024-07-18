class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int m = 0, ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(s[i]);
                ans++;
            }
            if (s[i] == ')' && st.top() == '(') {
                st.pop();
                m = max(ans, m);
                ans--;
            }
        }
        return m;
    }
};