#include<stdio.h>
int main(){
    int n ; 
    printf("ente rthe number: ");
    scanf("%d",&n);
    // ternery operator condition - exp 1 ? exp 2 : exp 3
    n%2==0 ? printf("even number") : printf("odd number");
    return 0;
}