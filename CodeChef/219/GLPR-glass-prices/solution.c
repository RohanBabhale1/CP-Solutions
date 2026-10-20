#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    int n=2*x;
    if(n<y){
        printf("PLASTIC");
    }else{
        printf("METAL");
    }
}
