class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> st;
        deque<int> q;
        for (int i = sandwiches.size() - 1; i >= 0; i--)
            st.push(sandwiches[i]);
        for (int i = students.size() - 1; i >= 0; i--)
            q.push_front(students[i]);
        int s = 5000;
        while (s > 0) {
            if (q.front() == st.top()) {
                q.pop_front();
                st.pop();
            } else {
                int temp = q.front();
                q.pop_front();
                q.push_back(temp);
            }
            s--;
            if (q.empty())
                break;
        }
        return st.size();
    }
};