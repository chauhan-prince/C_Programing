#include<stdio.h>

typedef int* pointer;

int main(){

    int x = 5, y = 7;
    // int* a = &x, b = &y;     //  show error
    pointer a = &x, b = &y;

    printf("%p\n",a);
    printf("%p",b);

    return 0;
}