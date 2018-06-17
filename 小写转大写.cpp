#include<stdio.h>
main()
{
	char ch1,ch2,ch3,ch4,ch5,ch6;
	scanf("%c %c %c",&ch1,&ch2,&ch3);
	ch4=('a'<=ch1&&ch1<='z')?(ch1-32):ch1;
	ch5=('a'<=ch2&&ch2<='z')?(ch2-32):ch2;
	ch6=('a'<=ch3&&ch3<='z')?(ch3-32):ch3;
	printf("%c %c %c",ch4,ch5,ch6);
}
