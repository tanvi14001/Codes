class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int n=operations.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(operations[i]=="C" && !st.empty())
            st.pop();
            else if(operations[i]=="D")
            st.push(st.top()*2);
            else if(operations[i]=="+")
            {
                int x=st.top();
                st.pop();
                int y=st.top();
                st.push(x);
                st.push(x+y);
            }
            else st.push(stoi(operations[i]));
        }
            while(!st.empty())
            {
                sum+=st.top();
                st.pop();
            }
        return sum;
    }
};