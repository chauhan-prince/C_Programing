#include<stdio.h>
int main(){

    int x;
    printf("Enter the year : ");
    scanf("%d",&x);

    if(x%4==0){
        printf("This  is a loop year");
    }
    else{
        printf("This is not loop year ");
    }
    return 0;

}