#include<stdio.h>
int main(){
    
    int a;
    int b;
     int c;

    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter secand number : ");
    scanf("%d",&b);
    printf("Enter therd number : ");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("%d is greatest",a);
    }

    if(b>a && b>c){
        printf("%d is greatest",b);
    }

    if(c>a && c>b){
        printf("%d is greatest",c);
    }
    return 0;
}