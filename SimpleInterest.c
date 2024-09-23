#include<stdio.h>
int main(){

    float principal, rate, time, si; 

    printf("Enter principle : ");
    scanf("%f",&principal);
    
    printf("Enter rate : ");
    scanf("%f",&rate);
    
    printf("Enter time : ");
    scanf("%f",&time);

    si = (principal * rate * time)/100;
    printf("Your Simple Interst is : %f",si);

    return 0;
}