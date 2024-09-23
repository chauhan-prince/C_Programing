       #include<stdio.h>
       int main(){

         int x;                                        // jo 5 or 3 dono sedivisible hai;
         printf("Enter number : ");
         scanf("%d",&x);

         if(x%5==0 && x%3==0){
            printf("Divisible by 5 and 3");
         }
         else{

            printf("Not Divisible by 5 and 3");
         }
        return 0;
       }
