#include<stdio.h>
int main()
{
    float cl,fah;
    printf("\n enter temperature in farehenit");
    scanf("%f",&fah);
    cl=(fah-32)*5/9;
    printf("\n the temperature in celsius is =%f",cl);
    return 0;

}
