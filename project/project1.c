#include<stdlib.h>
#include<time.h>
#include<stdio.h>
int main(){
    srand(time(0));
    int secreat = rand()%100+1;
    int attempts;
    attempts=5;
    int user_choice=0;
    while(user_choice!=secreat){
    printf("\nenter your predicted number: ");
    scanf("%d",&user_choice);
    attempts--;
    printf("your attempts left:%d",attempts);
    if(user_choice==secreat){
        printf("\nyou won");
    }
    else if(user_choice>secreat){
        printf("\nyour prediction is too high");
    }
    else if(attempts==0){
        printf("\nyou lose the game!");
        break;
    }
    else
        printf("\nyour prediction is too low");

    }
    printf("\nthe secreat number is:%d",secreat);
    
    return 0;
    

}