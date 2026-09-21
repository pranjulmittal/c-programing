        // QUESTION 1 - PROFIT LOSS

// #include<stdio.h>

// int main()
// {  
//     float cost_price , selling_price, item_sell_price, profit , loss;
//     cost_price = 50;
//     selling_price = 100;

//     printf("enter the amt at which you sell the item: ");
//     scanf("%f",&item_sell_price);

//     if(item_sell_price>cost_price){
//         printf("you are in profit");
//         profit = item_sell_price-cost_price;
//         printf("\nthe profit is : %f",profit);
//     }
//     else{
//         printf("you are in loss");
//         loss = item_sell_price-cost_price;
//         printf("\nthe loss is of: %f",loss);

//     }

   
//    return 0;

// }

                // QUESTION 2 - area is greater than perimeter or not

// #include<stdio.h>

// int main(){
//         float length,breadth,area,perimeter;
//         printf("enter the desired length: ");
//         scanf("%f",&length);
//         printf("enter the desired breadth:");
//         scanf("%f",&breadth);
//         area  = length*breadth;
//         perimeter = 2*(length+breadth);

//         if(area>perimeter){
//                 printf("area is greater than perimeter");
//         }

//         else{
//                 printf("perimeter is greater ");
//         }
//         return 0 ;
// }

                // QUESTION 3 -NUMBER IS DIVISIBLE BY 3 AND 5

// #include<stdio.h>
// int main(){
//         int n ; 
//       printf("enter the number: ");
//         scanf("%d",&n);
//         if(n%3==0 && n%5==0){
//                 printf("number is divisible by both 3 and 5");
//         }
//         else{
//                 printf("number is not divisible by both 3 and 5");
//         }
//         return 0;
// }

                // QUESTION 4 - Greatest of them

// #include<stdio.h>

// int main(){
//         int x,y,z;
//         printf("enter the 1st number: ");
//         scanf("%d",&x);
//         printf("enter the 2nd number: ");
//         scanf("%d",&y);
//         printf("enter the 3rd number: ");
//         scanf("%d",&z);
//         if(x>y&&x>z){
//                 printf("the 1st number is greatest: %d",x);
        
//         }
//         if(y>x && y>z){
//                 printf("the 2nd number is greatest: %d",y);
//         }
//         else{
//                 printf("the 3rd number is greatest: %d",z);
//         }



//         return 0;
// }

                // QUESTION 5 - SIDES OF TRIANGLE

// #include<stdio.h>

// int main(){
//         int x,y,z;
//         printf("enter the length of 1st side: ");
//         scanf("%d",&x);
//         printf("enter the length of 2nd side: ");
//         scanf("%d",&y);
//         printf("enter the length of 3rd side: ");
//         scanf("%d",&z);
//         if (x<y+z || y<x+z || z<x+y){
//                 printf("these can be sides of triangle");
//         }
//         else{ 
//                 printf("these can not be sides of triangle");
//         }


//         return 0;
// }

                // QUESTION 6

// #include<stdio.h>

// int main(){
//         int ram , shyam , ajay;
//         printf("enter the gae of ram: ");
//         scanf("%d",&ram);
//         printf("enter the age of shyam: ");
//         scanf("%d",&shyam);
//         printf("enter the age of ajay: ");
//         scanf("%d",&ajay);
//         if(ram>shyam && ram>ajay){
//                 printf("ram is oldest");
//         }
//         if(shyam>ram && shyam>ajay){
//                 printf("shyam is oldest");
//         }
//         else{
//                 printf("ajay is oldest");
        //  }


        // return 0;
// }

                // QUESTION 7 - GRADES ACCOR TO MARKS

// #include<stdio.h>
// int main(){
//         int marks;
//         printf("enter your marks: ");
//         scanf("%d",&marks);
//         if(marks>=90 && marks<=100){
//                 printf("excellent");
//         }
//         else if(marks>=80){
//                 printf("very good");
//         }
//         else if(marks>=70){
//                 printf("good");
//         }
//         else if(marks>=60){
//                 printf("can do better");
//         }
//         else if(marks>=50){
//                 printf("avg");
//         }
//         else if(marks>=40){
//                 printf("below avg");
//         }
//         else{
//                 printf("fail");
//         }
//     return 0 ;
// }

                // QUESTION 8 - POINTS ON LINE

#include<stdio.h>
int main(){
        int x,y;
        printf("enter the x coordinates: ");
        scanf("%d",&x);
        printf("enter the y coodinate:");
        scanf("%d",&y);
        if((x>0||x<0) && y==0){
                printf("these coordinates present in x axis");
        }
        else if((y>0||y<0) && x==0){
                printf("these coordinates present in y axis");
        }
        else if(x==0 && y==0){
                printf("coordinates present in origin");
        }
        else {
                printf("thses coordinates present in x-y axis");
        }
        return 0 ;
    }





