class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans=0;
        int n=logs.size();
        for(int i=0;i<n;i++)
        {
            if(logs[i]=="../")
            {
                if(ans>0) ans--;
            }
            if(logs[i]!="../" && logs[i]!="./")
            ans++;
        }
        return ans;
    }
};