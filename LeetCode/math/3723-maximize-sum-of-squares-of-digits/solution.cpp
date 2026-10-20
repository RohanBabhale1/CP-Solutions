class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) return "";
        string s(sum / 9, '9');
        if (sum % 9) s += char('0' + sum % 9);
        s.append(num - s.size(), '0');
        return s;
    }
};
