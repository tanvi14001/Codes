class Solution {
public:
    char findTheDifference(string s, string t) {
        int s_sum = 0, t_sum = 0;
        for (char c : s)
            s_sum += int(c);
        for (char c : t)
            t_sum += int(c);
        return char(t_sum - s_sum);
    }
};