class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0, j=0, cnt=0;
        while(i<s.size() && j<t.size())
        {
            if(s[i]==t[j])
            {
                cnt++;
                i++; j++;
            }
            else
            j++;
        }
        if(cnt==s.size())
        return true;
    return false;
    }
};