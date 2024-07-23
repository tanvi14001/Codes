class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,sum1=0;
        int n=nums.size();
        vector<int>ans;

        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            while(nums[i]>0)
            {
                ans.push_back(nums[i]%10);
                nums[i]=nums[i]/10;
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            sum1+=ans[i];
        }
        return abs(sum1-sum);
    }
};