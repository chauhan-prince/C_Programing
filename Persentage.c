#include<stdio.h>
int main(){

    float maths = 90; //math markes
    float english = 89; //english markes
    float chimestry = 77; //economic markes
    float physics = 80; // physics markes
    float economic = 99; // chemistry markes

    float percentage = (maths + english + chimestry + physics + economic)/5;

    printf("Percentage of 5 subject is : %f",percentage);

    return 0;
}