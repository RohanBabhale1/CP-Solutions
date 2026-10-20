#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); 
    while (t--) {
        int n, sushil_wealth;
        scanf("%d", &n);
        
        int wealth[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &wealth[i]);
        }

        sushil_wealth = wealth[n - 1]; 
        int position = n - 1; 

        while (position > 0 && sushil_wealth >= 2 * wealth[position - 1]) {
            wealth[position] = wealth[position - 1]; 
            position--;
        }

        wealth[position] = sushil_wealth; 

        printf("%d\n", position + 1); 
    }

    return 0;
}
