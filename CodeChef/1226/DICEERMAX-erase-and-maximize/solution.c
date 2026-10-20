#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int n,s;
        scanf("%d %d",&n,&s);
        int ov6 = (s > 5*n)?(s - 5*n):0;
        int max_score = 6*n - ov6;
        printf("%d\n", max_score);
    }
    return 0;
}
