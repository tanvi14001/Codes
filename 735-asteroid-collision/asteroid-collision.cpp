class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        for (int c : asteroids) {
            if (c > 0)
                ans.push_back(c);
            else {
                while (!ans.empty() && ans.back() > 0 && ans.back() < abs(c))
                    ans.pop_back();
                if (!ans.empty() && ans.back() == abs(c))
                    ans.pop_back();
                else if (ans.empty() || ans.back() < 0)
                    ans.push_back(c);
            }
        }
        return ans;
    }
};