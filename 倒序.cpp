#include <stdio.h>
main()
{
	int i;
	scanf("%d",&i);
	printf("%d",(i%10)*100+(i/10%10)*10+i/100);
 } 
