#include<stdio.h>
int main(){

    int x;
    printf("Enter a number : ");
    scanf("%d",&x);

    if(x>5){
        printf("This number is greater than 5");
    }
    else{
        printf("This number is not greater than 5");
    }
    
    return 0;
}