#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n<0){                  //if n is negetive number
        n = n * (-1);
    }
    printf("the absolute value is : %d",n);

    return 0;
}