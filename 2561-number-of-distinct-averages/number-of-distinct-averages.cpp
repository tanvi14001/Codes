
class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n=nums.size();
        int i=0, j=n-1;
        vector<double>ans;
        sort(nums.begin(),nums.end());
        while(i<j)
        {
            ans.push_back(double(nums[i]+nums[j])/2);
            i++; j--;
        }
        int cnt=1;
        sort(ans.begin(),ans.end());
        for(int i=1;i<ans.size();i++)
        {
            if(ans[i]!=ans[i-1]) cnt++;
        }
        return cnt;
    }
};
    