class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        
        string concatenate=goal+goal;
        return concatenate.find(s)!=string::npos;
    }
};