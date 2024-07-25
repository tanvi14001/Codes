class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n=nums.size();
        int i=0, j=n-1;
        set<double>ans;
        sort(nums.begin(),nums.end());
        while(i<j)
        {
            ans.insert(double(nums[i]+nums[j])/2);
            i++; j--;
        }
        
        return ans.size();
    }
};