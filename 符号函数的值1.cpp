#include <stdio.h>  
main()
{
	int n;
	scanf("%d",&n);
	if(n==0){
		printf("sign(%d) = %d",n,n);
	}
	else{
	if(n<0){
		printf("sign(%d) = %d",n,-1);
	}
	else{
		printf("sign(%d) = %d",n,1);
	}
	}
}
