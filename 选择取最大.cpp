#include <stdio.h>
int max(int a[], int length)
{
	int i;
	int maxid=0;
	for(i=1;i<length;i++){
		if(a[i]>a[maxid]){
			maxid=i;
		}
	}
	return maxid;
}
int main()
{
	int a[]={1,3,4,5,6,76,99,31,56};
	int maxid=max(a, sizeof(a)/sizeof(a[0]));
	printf("%d \n",maxid);
	return 0; 
}
