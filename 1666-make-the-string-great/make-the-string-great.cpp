class Solution {
public:
    string makeGood(string s) {
      int n=s.length();
        string str="";
        if(n==1) return s;
        stack<char>st;
        for(auto a:s){
            if(st.empty()) st.push(a);
            else{
                if(st.top()-'A'== a-'a' || st.top()-'a' == a-'A')
                st.pop();
                else st.push(a);
            }
        }
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;   
    }
};