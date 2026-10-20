#include <stdio.h>

int main() {
	char string[6];
	scanf("%s", string); 
	for(int i=0;i<5;i++){
	    if(i==2 && string[i]!='n'){
	        printf("NO"); 
	        return 0 ;
	    }
	    if(i==3 && string[i]!='t'){
	        printf("NO");
	        return 0;
	    }
	    if(i==4 && string[i]!='a'){
	        printf("NO"); 
	        return 0 ;
	    }
	}
	printf("Yes");

}
