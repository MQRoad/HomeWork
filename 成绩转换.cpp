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

//���ڵ���90��ΪA��
//С��90�Ҵ��ڵ���80ΪB��
//С��80�Ҵ��ڵ���70ΪC��
//С��70�Ҵ��ڵ���60ΪD��
//С��60ΪE��
