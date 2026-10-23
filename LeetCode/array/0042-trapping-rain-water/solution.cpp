
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector <int> leftmax(n);
        vector <int> rightmax(n);
        int left = 0, right = 0;
        for ( int i = 0; i < n; i++ ) {
            leftmax[i] = max( left, height[i] );
            left = max( left, height[i] );
            rightmax[n-i-1] = max( right, height[n-i-1] );
            right = max( right, height[n-i-1] );
        }
        int sum = 0;
        for ( int j =0; j < n; j++ ) {
            sum += min( leftmax[j] , rightmax[j] ) - height[j];
        }
        return sum;
    }
};
