class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int>ans;
        while(n>0)
        {
            ans.push_back(n%10);
            n=n/10;
        }
        int sum=0, prod=1;
        for(int i=0;i<ans.size();i++)
        {
            sum+=ans[i];
            prod*=ans[i];
        }
        return (prod-sum);
    }
};