#include<stdio.h>

// void fun(){
//     printf("Hello");
// }

int main(){
    void fun();     // prototype function
    fun(); 
    return 0;
}

void fun(){
    printf("Hello");
}