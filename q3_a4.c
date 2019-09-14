#include<stdio.h>
#include<math.h>
void main()
{
    int a,i;
    printf("enter the limit ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i>0&&i<2)
        printf("\n even no between 1 t0 50 are :-");
        if(i<=50&&i%2==0)
            printf("\n%d",i);
        if(i>49&&i<51)
        printf("\n odd no between 50 t0 %d are :-",a);
         if(i>=50&&i%2!=0)
            printf("\n%d",i);

    }

}

