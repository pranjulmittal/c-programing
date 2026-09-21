#include<stdio.h>

int main()
{  
   float p,r,t,si ;
   printf("enter your principle: ");
   scanf("%f",&p);
   printf("enter your rate: ");
   scanf("%f",&r);
   printf("enter your time: ");
   scanf("%f",&t);
    si = (p*r*t)/100;
   printf("simple intrest is : %f",si);
   return 0;

}