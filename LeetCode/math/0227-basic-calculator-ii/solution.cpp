class Solution {
public:
    int calculate(string s) {
        long num = 0, last = 0, ans = 0;
        char op = '+';

        for (int i = 0; i <= s.size(); i++) {
            if (i < s.size() && isdigit(s[i]))
                num = num * 10 + s[i] - '0';

            else if (i == s.size() || s[i] != ' ') {
                if (op == '+') ans += last, last = num;
                else if (op == '-') ans += last, last = -num;
                else if (op == '*') last *= num;
                else if (op == '/') last /= num;

                op = s[i];
                num = 0;
            }
        }
        return ans + last;
    }
};
