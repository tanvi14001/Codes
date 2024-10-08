class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size()<3) return 0;
        int i  = 0;
        int count = 0;
        for(int j = 2; j<s.size(); j++){
            if(s[i] != s[i+1] && s[i] != s[j] && s[i+1]!=s[j]) count++;
            i = j-1;
        }
        return count;
    }
};