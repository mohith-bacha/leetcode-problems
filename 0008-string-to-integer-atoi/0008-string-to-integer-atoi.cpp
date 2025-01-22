class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long ans = 0;
        int n = s.length();
        while (i < n && s[i] == ' ') {
            i++;
        }
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (i + 1 < n && (s[i] == s[i + 1])) {
                return 0;  
            }

            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while (i < n && isdigit(s[i])) {
            int val = s[i] - '0'; 
            if (ans > (INT_MAX - val) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            ans = ans * 10 + val;
            i++;
        }
        return sign * ans;
    }
};
