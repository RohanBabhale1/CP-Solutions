#include <stdio.h>

int main() {
	int x,n;
	scanf("%d %d",&x,&n);
	int cost=n*10;
	int rem=x-cost;
	int j=rem/20;
	printf("%d",j);

}
