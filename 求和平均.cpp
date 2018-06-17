#include <stdio.h>
main()
{
	int a,b,c,d,Sum;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	float Average;
	Sum = a+b+c+d;
	Average = (a+b+c+d)/4.0;
	printf("Sum = %d; Average = %.1f",Sum, Average);
	
}
