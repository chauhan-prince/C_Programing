#include<stdio.h>
int  fibonaacci (int x, int y){
    int x = 1;
    int y = 1;
    int sum = 1;
    for(int i=1;i<=n-2;i++){
        sum = x + y;
        x = y;
        y = sum;
    }
    return  sum;
}                                                                           // NO SOLVE //
int main(){

    int a;
    printf("Enter a number : ");
    scanf("%d",&a);

    int b;
    printf("Enter b number : ");
    scanf("%d",&b);

   int fact = fibonacci(a,b);

    printf("%d ",fact);

    return 0;
}