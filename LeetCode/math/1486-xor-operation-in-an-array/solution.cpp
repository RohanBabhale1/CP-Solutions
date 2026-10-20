class Solution {
public:
    int xorOperation(int n, int start) {
        int i=0,res=0;
        while(n>0){
            res^=start+2*i;
            i++;
            n--;
        }
        return res;
    }
};
