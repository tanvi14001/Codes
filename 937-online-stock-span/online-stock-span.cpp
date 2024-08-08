class StockSpanner {
public:                         //OPTIMAL SOLUTION
    int index;
    stack<pair<int, int>> st;
    StockSpanner() { index = -1; }

    int next(int price) {
        index += 1;
        int ans;
        while (!st.empty() && price >= st.top().first) {
            st.pop();
        }
        ans = index - (st.empty() ? -1 : st.top().second);
        st.push({price, index});
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */