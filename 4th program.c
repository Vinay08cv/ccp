#include<stdio.h>
int main()
{
    int m,n;

     printf("enter the initial value\n");
     scanf("%d",&m);
      printf("enter the  ending value\n");
     scanf("%d",&n);

     do
    {
      if(m%2==0)
      printf("%d\t",m);
      m=m+1;
      }while(m<=n);
      return 0;


}
