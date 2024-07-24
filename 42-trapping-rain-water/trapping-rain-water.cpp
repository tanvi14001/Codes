class Solution {
public:
    void lefty(vector<int>& height, vector<int>& pmax) {
        int n = height.size();
        pmax[0] = height[0];
        for (int i = 1; i < n; i++) {
            pmax[i] = max(pmax[i - 1], height[i]);
        }
    }
    void righty(vector<int>& height, vector<int>& smax) {
        int n = height.size();
        smax[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            smax[i] = max(smax[i + 1], height[i]);
        }
    }
    int trap(vector<int>& height) {
        int total = 0;
        int n = height.size();

        vector<int> pmax(n);
        vector<int> smax(n);

        lefty(height, pmax);
        righty(height, smax);

        for (int i = 0; i < n; i++) {
            int leftmax = pmax[i], rightmax = smax[i];
            if(height[i]<leftmax && height[i]<rightmax)
            total += min(leftmax, rightmax) - height[i];
        }
        return total;
    }
};