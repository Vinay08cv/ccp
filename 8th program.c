#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sum,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    i=0;
    sum=0;
    while(i<=n)
    {
        if(i%2!=0)

            sum=sum+(i*i);
            i++;

    }
    printf("the sum of squares of first n odd numbers id %d",sum);
}
