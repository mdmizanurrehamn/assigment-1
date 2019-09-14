#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the last no");
    scanf("%d",&b);
    for(a=0;a<=b;a++){
        if(a>-1&&a<1)
           printf("multiples of 3 or 7 are \n");
        if(a%3==0||a%7==0)
            printf("\n %d",a);
    }
}
