#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y, N;
        scanf("%d %d %d", &X, &Y, &N);

        int remaining = X - (Y * N);
        if (remaining < 0)
            remaining = 0;

        printf("%d\n", remaining);
    }
    return 0;
}
