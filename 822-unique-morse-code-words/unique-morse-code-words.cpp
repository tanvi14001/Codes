class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> table{".-",   "-...", "-.-.", "-..",  ".",    "..-.",
                             "--.",  "....", "..",   ".---", "-.-",  ".-..",
                             "--",   "-.",   "---",  ".--.", "--.-", ".-.",
                             "...",  "-",    "..-",  "...-", ".--",  "-..-",
                             "-.--", "--.."};
        unordered_set<string> s;
        string temp = "";
        for (auto word : words) {
            temp = "";
            for (auto it : word) {
                temp += table[it - 'a'];
            }
            s.insert(temp);
        }
        return s.size();
    }
};