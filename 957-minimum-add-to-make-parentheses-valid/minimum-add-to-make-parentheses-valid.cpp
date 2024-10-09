class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;

        for (char it : s) {
            if (st.empty())
                st.push(it);
            else if (st.top() == '(' && it == ')')
                st.pop();
            else
                st.push(it);
        }
        return st.size();
    }
};