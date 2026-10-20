#include <stdio.h>
int main() {
	int i;
	scanf("%d",&i);
	int k=i;
	int a[i];
	while(i--){
	    scanf("%d",&a[i]);
	}
	while(k--){
	    if(a[k]%2!=0){
	        a[k]-=1;
	    }
	    int j=(a[k]*a[k])/16;
	    printf("%d\n",j);
	}

}
