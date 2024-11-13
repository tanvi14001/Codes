class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int low=0,high=n-1,mid,ans=n;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]>mid)
                ans=mid,high=mid-1;
            else
                low=mid+1;
        }
        return ans;
    }
};