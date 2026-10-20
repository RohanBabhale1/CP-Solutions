#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d %d",&n,&k);
        int a[n];
        int sum=0;
        int i;
        
        for(i=0; i < n; i++){
            scanf("%d",&a[i]);
        }
        
        for (i = 0; i < n; i++) {
            if (sum + a[i] > k) {
                break;
            }
            sum += a[i];
        }
        
        printf("%d\n", i); 
    }
    
    return 0;
}
