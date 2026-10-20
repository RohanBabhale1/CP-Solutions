#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int t;
    scanf("%d", &t);
    
    while(t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        
        int a[n];
        char st[n+1];
        
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        scanf("%s", st);
        
        int available[n];
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(st[i] == '0') {
                available[count++] = a[i];
            }
        }
        
        if(count < k) {
            printf("-1\n");
        } else {
            qsort(available, count, sizeof(int), cmp);
            int sum = 0;
            for(int i = 0; i < k; i++) {
                sum += available[i];
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}
