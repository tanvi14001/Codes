class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n=colors.size();
        int i=0, cnt=0;
       for(int j=2;j<n+2;j++)
       {
        if(colors[i%n]!=colors[(i+1)%n] && colors[(i+1)%n]!=colors[j%n]) 
        cnt++;
        i=j-1;
       } 
       return cnt;
    }
};