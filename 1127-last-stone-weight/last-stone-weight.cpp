class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for (int a : stones) {
            pq.push(a);
        }
        while (pq.size() > 1) {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if (x == y)
                continue;
            else
                pq.push(abs(x - y));
        }
        return pq.size() == 0 ? 0 : pq.top();
    }
};