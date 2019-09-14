#include<stdio.h>
void main()
{
    int a;
    for(a=20;a<80;a++)
    {
        if(a>19&&a<21)
            printf("even no between 20 to 40 are:-");
        if(a%2==0&&a<=40)
            printf("\n%d",a);
        if(a>49&&a<51)
            printf("\n odd numbers between 50 to 80 are:-");
        if(a%2!=0&&a>50)
            printf("\n%d",a);
    }
}
