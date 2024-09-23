#include<stdio.h>
int main(){

    int r, s, a;
    printf("Enter 1st age : ");
    scanf("%d",&r);
     printf("Enter 2nd age : ");
    scanf("%d",&s);
     printf("Enter 3rd age : ");
    scanf("%d",&a);

    if(r<s){
        if(r<a)
            printf("%d r is youngest",r);
        else    
            printf("%d a is youngest",a);
    }
    else
        if(s<a)
            printf("%d s is youngest",s);
        else
            printf("%d a is youngest",a);
    
    return 0;
}