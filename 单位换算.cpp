#include <stdio.h>  
int main(void)  
{  
     int foot,inch;  
     int meter;  
     printf("�������ݣ���λ������:");  
     scanf("%d",&meter);  
     foot = meter/30.48;  
     inch = (meter-30.48*foot)/30.48*12;  
     printf("%d %d\n",foot,inch);  
     return 0;  
}  
