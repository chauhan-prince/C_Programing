#include<stdio.h>
int main(){

    int n;
    do{
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d\n",n);

        if(n % 7 == 0){  // multpile of 7
            break;                          // jb tak 7 ka multiple nahi print hoga jb tak code run krega, jb 7 ka multiple enter hoga code close hoga

        }
    }while(1);
    
        printf("thank you");

    return 0;
}