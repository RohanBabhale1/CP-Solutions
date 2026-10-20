#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,x,p=0;
	    scanf("%d %d",&n,&x);
	    while(n!=0){
	        
	        if((n+x)%2==0){
	            p++;
	        }
	        n--;
	        
	    }
	    printf("%d\n",p-1);
	}

}
