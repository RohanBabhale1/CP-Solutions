#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        
        int A[n]; 
        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }
        
        int B[m];  
        for (int j = 0; j < m; j++) {
            scanf("%d", &B[j]);
        }
        
        int sadCustomers = 0;  
        
        for (int j = 0; j < m; j++) {
            int type = B[j] - 1;  
            if (A[type] > 0) {
                A[type]--;  
            } else {
                sadCustomers++; 
            }
        }
        
        printf("%d\n", sadCustomers); 
    }
    return 0;
}
