#define all(a) (a).begin(),(a).end()
class Solution {
public:
    int minOperations(string s) {
        string sorted = s;
        sort(all(sorted));
        if(s == sorted) return 0;

        int n = s.length();
        if(n == 2) return -1;
        if(s[0] == sorted[0] || s[n-1] == sorted[n-1]) return 1;
        if(count(all(s), sorted[n-1]) == 1 && s[0] == sorted[n-1] &&
           count(all(s), sorted[0]) == 1 && s[n-1] == sorted[0]) 
           return 3;
        return 2;
    }
};
