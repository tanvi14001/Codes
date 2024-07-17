class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=0, l=0, r=0, zeros=0;
        while(r<nums.size())
        {
            if(nums[r]==0) zeros++;
            while(zeros>k)
            {
                if(nums[l]==0) zeros--;
                l++;
            }
            if(zeros<=k)
            {
                int len=r-l+1;
                maxlen=max(maxlen,len);
            }
            r++;
        }
        return maxlen;
    }
};