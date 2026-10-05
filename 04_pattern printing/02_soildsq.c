#include<stdio.h>
int main(){
    int n,m;
    printf("enter the no of rows: ");
    scanf("%d",&n);
    printf("enter the no of coloum: ");
    scanf("%d",&m);
    for(int i =1;i<=n;i++){
        for(int i=1;i<=m;i++){
            printf("*");
         }
         printf("\n");
    }
    return 0;
}