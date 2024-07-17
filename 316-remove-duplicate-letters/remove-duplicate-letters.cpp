class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int> frequencies;
        unordered_map<char, int> isTaken;
        string res = "";

        for (char c : s)
            frequencies[c]++;

        for (int i = 0; i < s.size(); i++) {
            frequencies[s[i]]--;

            if (isTaken[s[i]])
                continue;

            while (!res.empty() && res.back() > s[i] &&
                   frequencies[res.back()]) {
                isTaken[res.back()] = 0;
                res.pop_back();
            }
            res.push_back(s[i]);
            isTaken[s[i]] = 1;
        }

        return res;
    }
};