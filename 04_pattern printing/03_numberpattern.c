#include<stdio.h>
int main(){
    int n,m;
    printf("enter the row: ");
    scanf("%d",&n);
    printf("enter the coloum: ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            printf("%d",i);
        }
        printf("\n");
    }
     
    return 0;
}