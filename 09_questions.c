            // QUETSION 1 - Finding remainder 

// #include<stdio.h>

// int main()
//  {  
//    int a,b,r;
//    printf("enter value of a : ");
//    scanf("%d",&a);
//    printf("enter value of b : ");
//    scanf("%d",&b);
   

//     r = a% b;

//    printf("the remainder when a is divided by b is : %d",r);

//    return 0 ;
//   }
   
                
            // QUESTION 2  -  Sum of digits 

// #include<stdio.h>

// int main()
// {  
//     int a,sum,x,y,z;
//         printf("enter the 3 digit number: ");
//         scanf("%d",&a);
//         x = a/100;
//         y= (a/10)%10;
//         z=a%10;
//         sum = x+y+z;
//         printf("the sum of the digits of nuumber is : %d",sum);
    
   
//    return 0; 

// }   
    
                // QUETSION 3 - Finding fractional part from float

// #include<stdio.h>

// int main()
// {  
//    float x ;
//     printf("enter the number  : ");
//     scanf("%f",&x);
//     int y ;
//     y=x; // it mean it will take only int part from float

//     printf("the fractional part of number x is : %f",x-y); // this will fractional part 
    
//    return 0;

// }

                // QUESTION 4 - CALCULATION RULE

#include<stdio.h>

int main()
{  
   int i = 2 , j = 3 , k,l,m ; 
   float a,b;

    k = i/j*j; // computer always solve algebra left to right not according to bodmas
    l = j/i*i;
    a = i/j*j;
    b = j/i*i;
    m = i+j/i*i;

    printf(" %d\n %d\n %d\n %f\n %f",k,m,l,a,b);

   return 0;

}


   