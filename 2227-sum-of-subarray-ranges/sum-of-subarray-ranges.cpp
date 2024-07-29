class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
    
        for(int i=0;i<n;i++)
        {
            int smallest=nums[i], largest=nums[i];
            for(int j=i+1;j<n;j++)
            {
                smallest=min(smallest,nums[j]);
                largest=max(largest,nums[j]);
                sum+=largest-smallest;
            }
        }
        return sum;
    }
};