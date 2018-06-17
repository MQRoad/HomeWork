#include <stdio.h>
main()
{
	int a;
	char A,B,C,D,E;
	scanf("%d",&a);
	if(a<60){
		printf("%c",'E');
	}else{
		if(a>=60&&a<70){
			printf("%c",'D');
		}else{
			if(a>=70&&a<80){
				printf("%c",'C');
			}else{
				if(a>=80&&a<90){
					printf("%c",'B');
				}else{
					printf("%c",'A');
				}
			}
		}
	}
 } 

//大于等于90分为A；
//小于90且大于等于80为B；
//小于80且大于等于70为C；
//小于70且大于等于60为D；
//小于60为E。
