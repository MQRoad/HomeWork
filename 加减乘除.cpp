#include<stdio.h>
main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	if(a%b==0){
		printf("%d / %d = %d\n",a,b,a/b);
	} 
	else{
		printf("%d / %d = %.2lf\n",a,b,(double)a/b);
	}	
}

