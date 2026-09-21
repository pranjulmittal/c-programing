        // QUESTION - 1

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number you want to print: ");
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++){
//         printf("hello world\n");
//     }

//     return 0;
// }

            // QUESTION - 2

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i++){
//         printf("%d \n",i);
//     }

//     return 0;
// }

            // QUESTION-3

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100 ; i++){
//         if(i%2==0) printf("%d \n",i);
//     }
//     return 0;
// }

            

                // QUESTION-4

// #include <stdio.h>

// int main() {
//     int a;

//     printf("Enter the number of which you want a table: ");
//     scanf("%d", &a);

//     for (int i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", a, i, a * i);
//     }

//     return 0;
// }

            // QUESTION-5
// #include<stdio.h>

// int main(){
//     int a;
//     printf("enter the number of which you want the length of AP:");
//     scanf("%d",&a); 
//     for(int i=4;i<=3*a+1;i=i+3){
//         printf("the AP is : %d\n",i);
//     }
//     return 0;
// }

            // QUESTION-6 -- G.P

// #include<stdio.h>
// int main(){
//     int a;
//     printf("ente rthe number:");
//     scanf("%d",&a);
//     printf("your G.P is :");
//     int n=1;
//     for(int i=1;i<=a;i++){
//         printf(" %d",n);
//         n =n*2;
        
//     }
//     return 0;
// }            

            // QUESTION-7

// #include<stdio.h>        
// int main(){
//     int n;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     printf("your G.P is:");
//     int a=3;
//     for(int i=1;i<=n;i++){
//         printf("  %d",a);
//         a =a*4;
//     }
//     return 0;
// }    

            // QUESTION-8

// #include<stdio.h>
// int main(){
//     int a =100;
//     for(int i=1;a>0;i++){
//         printf(" %d",a);
//         a=a-3;

//     }
//     return 0;
// }

            // QUESTION-9

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//            printf("the given number is composite");
//            break;
//         }
//         else{
//             printf("number is prime");
//             break;
//         }

//    }

//     return 0;
// }            


            // QUESTION-10

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%2!=0){
//             printf(" %d",i);
//         }
//     }
//     return 0;
// }            

            //QUETSION-11

#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%2!=0){
            continue;
        }
        printf(" %d",i);

    }
    return 0;
}            

