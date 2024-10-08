class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z')
                st.push(s[i]);
            else {
                if (!st.empty())
                    st.pop();
            }
        }
        s = "";
        while (!st.empty()) {
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
};