class Solution {
public:
    string reversePrefix(string word, char ch) {
        auto first = word.find(ch);
        reverse(word.begin(), word.begin() + first + 1);
        return word;
    }
};