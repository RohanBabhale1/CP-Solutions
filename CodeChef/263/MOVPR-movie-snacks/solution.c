#include <stdio.h>

int main() {
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	int k=2*x+3*y;
	
	int m=2*z+y;
	if(m<k){
	    printf("%d",m);
	}else{
	    printf("%d",k);
	}

}
