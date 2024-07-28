class Solution {
public:
    int percentageLetter(string s, char letter) {
        float cnt=0;
        float n=s.size();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==letter) cnt++;
        }
        float x=(cnt*100)/s.size();
        return x;
    }
};