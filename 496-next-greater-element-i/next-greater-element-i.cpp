class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int>nexti(n,-1);
        
        
        map<int,int>mpp;
        stack<int>st;
        vector<int>ans;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=nums2[i])
            st.pop();
            if(st.empty()) nexti[i]=-1;
            else nexti[i]=st.top();
            st.push(nums2[i]);
        }
        for(int i=0;i<n;i++)
        {
            mpp[nums2[i]]=i;
        }
        for(int i=0;i<m;i++)
        {
            int indextofind=nums1[i];
            int indexis=mpp[indextofind];
            ans.push_back(nexti[indexis]);
        }
        return ans;
    }
};