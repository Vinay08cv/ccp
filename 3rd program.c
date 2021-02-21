#include<stdio.h>
#include<math.h>
float area(float,float,float);
int main()

{
    float a,b,c,ar;
     printf(" enter the sides of the triangle");
     scanf("%f%f%f",&a,&b,&c);
       ar=area(a,b,c);
        printf("area is %f",ar);
        return 0;
}
float area(float a,float b,float c)
{
    float s,ar;
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}
