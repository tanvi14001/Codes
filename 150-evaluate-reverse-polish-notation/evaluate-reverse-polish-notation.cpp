class Solution {
public:
    int evalRPN(vector<string>& tokens) {
         int n=tokens.size();
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(tokens[i]=="+")
            {
                int x=st.top();
                st.pop();
                int y=st.top();
                st.pop();
                st.push(y+x);
            }
            else if(tokens[i]=="-")
            {
                int x=st.top();
                st.pop();
                int y=st.top();
                st.pop();
                st.push(y-x);
            }
            else if(tokens[i]=="*")
            {
                int x=st.top();
                st.pop();
                int y=st.top();
                st.pop();
                st.push(y*x);
            }
            else if(tokens[i]=="/")
            {
                int x=st.top();
                st.pop();
                int y=st.top();
                st.pop();
                st.push(y/x);
            }
            else st.push(stoi(tokens[i]));

        }
        return st.top();
    }
};