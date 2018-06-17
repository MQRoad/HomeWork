#include <stdio.h>
int search(int key, int a[], int length)
{
	int ret = -1;
	for(int i=0; i<length; i++){
		if(key == a[i]){
			return i;
			ret = i;
			break;
		}
	}
	return ret;
 }
int main()
{
	int a[] = {1,3,5,6,7,99,57};
	int r = search(3,a,sizeof(a)/sizeof(a[0]));
	printf("%d \n",r);
	return 0;
}
