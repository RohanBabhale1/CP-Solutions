#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);

        while (N >= A) {
            N -= (A - B);
        }

        printf("%d\n", N);
    }

    return 0;
}
