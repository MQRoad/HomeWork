#include <stdio.h>  
main()
{  
    int n, sign;  
    scanf("%d", &n);  
    if(n < 0)  
        sign = -1;  
    else if(n > 0)  
        sign = 1;  
    else  
        sign = 0;  
    printf("sign(%d) = %d\n", n, sign);
}
