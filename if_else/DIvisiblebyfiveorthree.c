#include<stdio.h>
int main(){
     
     int n;                                    
    printf("Enter a number : ");
    scanf("%d",&n);
    
    if(n%5==0 || n%3==0){                   // 5 ya 3 ma se kise ek se divisible ho;
        printf("The number is divisible by 5 or 3");
    }

    else{
        printf("The number is not divisible by 5 or 3 ");
    }

    return 0;
}