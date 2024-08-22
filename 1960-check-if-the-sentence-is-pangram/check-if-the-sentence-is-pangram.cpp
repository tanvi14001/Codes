class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> arr(26, 0);
        int cnt = 0;
        for (int i = 0; i < sentence.size(); i++) {
            arr[sentence[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (arr[i] == 0) {
                return false;
            }
        }
        return true;
    }
};