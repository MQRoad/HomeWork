#include<stdio.h>
#include<math.h>
main()
{
	int x,i;
    printf("plsese input value of x:\n");
    scanf("%d",&x);
    int result=0,k=1,t,temp;
	temp = x;
	while(temp){
	t=temp%2;
	result=k*t+ result;
	k = k*10;
	temp =(temp-t)/2;
	}
	printf("%d\n", result);
    int length=0,n[8];
	while(result!=0) {
	n[length++]=result%10;	
	result/=10;
	}
	for(i=length-1;i>=0;i--){
	}
	printf("ËÄÎåÁùÆßÎ»%d\t%d\t%d\t%d\n",n[3],n[4],n[5],n[6]);
}
