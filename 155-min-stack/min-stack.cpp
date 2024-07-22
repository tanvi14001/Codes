class MinStack {
    stack<long long> st;
    long long mini;

public:
    MinStack() {
        while(st.empty()==false) st.pop();
        mini=INT_MAX;
    }

    void push(int val) {
        long long value= val;
        if (st.empty()) {
            mini = value;
            st.push(value);
        } else if (value > mini)
            st.push(value);
        else {
            st.push(2 * value*1LL - mini);
            mini = value;
        }
    }

    void pop() {
        if (st.empty())
            return;
        long long x = st.top();
        st.pop();
        if (x < mini)
            mini = 2 * mini - x;
    }

    int top() {
        if (st.empty())
            return -1;
        long long x = st.top();
        if (mini < x)
            return x;
        return mini;
    }

    int getMin() { return mini; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */