#include<stdio.h>
int main(){

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    // 100 50 25 ...
    float a = 100;
    for(int i=1;i<=n;i++){
        printf("%f ",a);
        a = a * 0.5;
    }
    return 0;
}