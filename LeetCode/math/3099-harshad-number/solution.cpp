class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0,r;
        int y=x;
        while(x){
            r=x%10;
            x/=10;
            sum=sum+r;
        }
        if(y%sum==0){
            return sum;
        }else{
            return -1;
        }
        
    }
};
