#include <stdio.h>
#include <stdbool.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        char p[a + 1], q[b + 1];
        scanf("%s", p);
        scanf("%s", q);
        bool used[26] = {false};
        for (int i = 0; i < a; i++) {
            used[p[i] - 'a'] = true;
        }
        for (int i = 0; i < b; i++) {
            used[q[i] - 'a'] = true;
        }
        bool all_used = true;
        for (int i = 0; i < 26; i++) {
            if (!used[i]) {
                all_used = false;
                break;
            }
        }
        
        if (all_used) {
            printf("No\n"); 
        } else {
            printf("Yes\n"); 
        }
    }
    
    return 0;
}
