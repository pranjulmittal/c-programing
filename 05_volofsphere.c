#include<stdio.h>

int main()
{
    int r ; 
    printf("enter your radius = ");
    scanf("%d",&r);
    float vol;
    vol = 4*3.14*r*r*r/3;

    printf("the vol of sphere is = %f",vol);



    
    return 0;

}