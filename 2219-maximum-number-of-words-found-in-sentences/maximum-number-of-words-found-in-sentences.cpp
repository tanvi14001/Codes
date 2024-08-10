class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi=0;
        for(int i=0;i<sentences.size();i++)
        {
            int cnt=0;
            for(int j=0;j<sentences[i].size();j++)
            {
                if(!isalnum(sentences[i][j]))
                cnt++;
            }
            maxi=max(maxi,cnt);
        }
        return maxi+1;
    }
};