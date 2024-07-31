class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int a=0, c=0;
        map<char,int>mpp;
        for(auto c:s){
            mpp[c]++;
        }
        if(mpp.size()<s.size()) a=1;

        for(auto c:goal)
        {
            if(mpp.find(c)==mpp.end()) return 0;
            if(mpp[c]==1) mpp.erase(c);
            else mpp[c]--;
        }

        if(mpp.size()>0) return 0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=goal[i]) c++;
        }

        if(c==2) return 1;
        if(a==1 && c==0) return 1;

        return 0;
    }
};