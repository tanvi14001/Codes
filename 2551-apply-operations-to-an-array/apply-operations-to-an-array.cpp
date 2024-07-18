class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        while(i<n-1)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]=2*nums[i];
                nums[i+1]=0;
                i++;
            }
            i++;
        }
        int index=0;
        for(int j=0;j<n;j++)
        {
            if(nums[j]!=0)
            {
                nums[index++]=nums[j];
            }
        }
        for(int j=index;j<n;j++)
        {
            nums[j]=0;
        }
        return nums;
    }
};