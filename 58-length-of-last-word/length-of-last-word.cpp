class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size()-1;
        int j=n;
        int cnt=0;
        while(j>=0)
        {
            if(!isalnum(s[j])) {cnt++;j--;}
            else break;
        }
        int ans=0;
        for(int i=n-cnt;i>=0;i--)
        {
            if(isalnum(s[i])) ans++;
            else break;
        }
        return ans;
    }
};