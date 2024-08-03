class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mpp;
        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }
        for(auto x:t)
        {
            if(mpp.find(x)==mpp.end())return false;
            else if(mpp[x]==1) mpp.erase(x);
            else mpp[x]--;
        }

        if(mpp.size()>0) return false;
        return true;
    }
};