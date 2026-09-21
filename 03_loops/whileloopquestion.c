        // QUESTION-1
// #include<stdio.h>
// int main(){
//     int i;
//     while(i=10){
//         printf("\n%d",i);
//         i=i+1;
//     }
// return 0;
// }

        // QUESTION-2
        
// #include<stdio.h>
// int main(){
//     int x=4,y=0,z;
//     while(x>=0){
//         x--;
//         y++;
//         if(x==y){
//             continue;
//         }
//         else{
//             printf("\n%d",x);
//             printf("\n%d",y);
//         }
        

//     }
// return 0;

// }

         // QUESTION-3
         
// #include<stdio.h>
// int main(){
//     int n,count;
//     printf("enter the number n:");
//     scanf("%d",&n);
//     count=0;

//     while(n!=0){
//         n=n/10;
//         count++;
//     }
//     printf("the number of digit in n is: %d",count);
//     return 0;
// }

        // QUESTION-4

// #include<stdio.h>
// int main(){
//     int n,sum,ld;
//     printf("enter the number N: ");
//     scanf("%d",&n);
//     sum=0;
//     while(n!=0){
//        ld= n%10;
//         sum=sum+ld;
//         n=n/10;
//     }
//     printf("the sum of the digits is:%d",sum);
//     return 0;
// }

        // QUESTION-5

// #include<stdio.h>
// int main(){
//     int n,sum,ld;
//     printf("ente rthe number N: ");
//     scanf("%d",&n);
//     sum=0;
//     while(n!=0){
//         ld=n%10;
//         n=n/10;
//         if(ld%2==0){
//             sum=sum+ld;
//         }
        
//     }
//     printf("the of sum of even digit of n is:%d",sum);
//     return 0;
// }

        // QUESTION-6

// #include<stdio.h>
// int main(){
//     int n,factorial=1;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     while(n!=1){
//         factorial=n*factorial;
//         n--;
//     }
//     printf("the factorial of your given number:%d ",factorial);
//     return 0;

// }        

        // QUESTION-7

#include<stdio.h>
int main(){
        int n,rem,rev=0;
        printf("enter the number: ");
        scanf("%d",&n);
        while(n!=0){
                rem = n%10;
                rev = rev*10 + rem;
                n=n/10;
        }
        printf("the reverse number is: %d",rev);
        return 0;
}        