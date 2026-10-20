class Solution {
public:
    int mySqrt(int x) {
        int low = 1, hi = 46431;
        while (low <= hi) {
            int mid = low + hi >> 1;

            if ((long long) mid * mid > x) {
                hi = mid - 1;
            } else if ((long long) mid * mid < x) {
                low = mid + 1;
            } else return mid;
        }
        return hi;
    }
};
