#include <stdio.h>
main()  
{  
    int a, b, c, d;  
    scanf("%d %d", &a, &b);  
    c = a / 100 * 60 + a % 100 + b;  
    d = c / 60 * 100 + c % 60;  
    printf("%d\n", d);  
}

//1120 110
//11*60+20+110
//790/60*100+790%60
//13*100+10
//总的分钟数/60，商为小时，余数为分钟，分钟化为几小时几分 
