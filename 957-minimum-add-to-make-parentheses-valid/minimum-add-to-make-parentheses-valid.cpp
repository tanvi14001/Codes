class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int c = 0;
        for (char it : s) {
            if (it == '(')
                st.push(it);
            else {
                if (st.empty())
                    c++;
                else
                    st.pop();
            }
        }
        return c + st.size();
    }
};