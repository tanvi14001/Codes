class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int carry = 0;
        int n = a.size() - 1;
        int m = b.size() - 1;
        while (n >= 0 || m >= 0 || carry) {
            if (n >= 0)
                carry += a[n--] - '0';
            if (m >= 0)
                carry += b[m--] - '0';
            ans += carry % 2 + '0';
            carry = carry / 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};