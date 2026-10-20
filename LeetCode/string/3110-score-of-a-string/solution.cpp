class Solution {
public:
    int scoreOfString(string s) {
        int result = 0;
        int a,b;
        int i =1;
        while(i < s.length()){
            a = s[i-1];
            b = s[i];
            result += abs(a - b);
            i++;
        }
        return result;
    }
};
