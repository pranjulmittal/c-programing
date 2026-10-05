#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=7;j++){
            if(i==1){
                printf("*");
            }
            else if(i>=2){
                for(int k=1;k<=3;k++){
                    for(int l=1;l<=3+1-k;l++){
                        printf("*");
                    }
                }
            }
            
        }
        printf("\n");
    }
    return 0;
}