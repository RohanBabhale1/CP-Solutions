#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	int a,b,x,y;
	int n_tr;
	for(int i=0;i<t;i++){
	    scanf("%d %d %d %d",&a,&b,&x,&y);
	    n_tr=a/x;
	    a = a-n_tr*x;
	    b = b+n_tr*y;
	    printf("%d\n",a+b);
	    
	    
	    
	    
	}

}
