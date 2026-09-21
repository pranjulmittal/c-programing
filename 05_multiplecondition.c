#include<stdio.h>
int main(){
    float n;
    printf("enter the number : ");
    scanf("%f",&n);
     if(n>99 && n<1000){    //here && is for condition which signify "and"
        printf("number is 3 digit number ");
    }
    else{
        printf("number is not a 3 digit number ");
        
    }
    return 0;
}