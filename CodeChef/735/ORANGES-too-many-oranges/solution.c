#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k;
	    scanf("%d %d",&n,&k);
	    int l=n*10;
	    int h=n*12;
	    if(k>=l&&k<=h){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	}

}
