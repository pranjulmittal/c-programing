#include<stdio.h>
void factor(int n){
    for(int i=2;i<=n;i++){
        while(n%i==0){
            printf("%d",i);
            n=n/i;
        }
            
    }
    
}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("ddd: ");
    factor(n);
    return 0;

}