class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=0,num2=0,i=0;
        while (i <= n) {
            if (i % m == 0)
                num2 += i;
            else
                num1 += i;
            i++;
        }
    
        int res=num1-num2;
    
        return res;
    }
};
