#include<stdio.h>

int main()
{
    float math , physics , chemistry , eng ;
    printf("enter your math marks = ");
    scanf("%f",&math);
    printf("enter your physics marks = ");
    scanf("%f",&physics);
    printf("enter your chemistry marks = ");
    scanf("%f",&chemistry);
    printf("enter your eng marks = ");
    scanf("%f",&eng);
    printf("percentage of these 4 subjects are : %f", (math+physics+chemistry+eng)/4);


    
    return 0;

}